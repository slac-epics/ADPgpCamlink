

//#include <atomic>
#include <getopt.h>
#include <iostream>
#include <signal.h>
#include <unistd.h>
#include <rogue/Version.h>
#include <rogue/GeneralError.h>
#include "pgpClSerialDev.h"


//std::atomic<bool> terminateMemoryOrder;

//void int_handler(int dummy)
//{
    //terminateMemoryOrder.store(true, std::memory_order_release);
    // dmaUnMapDma();
//}

std::string	MapEscapeChars( const std::string & in )
{
	std::string		mapped;
	std::string::size_type last = 0;
	std::string::size_type pos = 0;
	while ( (pos = in.find("\\", last)) != std::string::npos )
	{
		mapped.append( in, last, pos - last );
		switch ( in[pos + 1] )
		{
			default:	mapped += in[pos + 1]; break;
			case 'r':	mapped += '\r'; break;
			case 'n':	mapped += '\n'; break;
			case '\\':	mapped += '\\'; break;
		}
		last = pos + 2;
	}
	mapped.append( in, last, pos );
	return mapped;
}

long
SendMsgLoop(
	pgpClSerialDev	&	pgpDev,
	double				timeout,
	int					verbose	)
{
	const size_t	S_SENDBUFFER_MAX	= 256;
	char			inBuffer[S_SENDBUFFER_MAX];
	unsigned char	recvBuffer[S_SENDBUFFER_MAX];
	std::string		sendBuffer;

	std::cout << "Hit Ctrl-C to exit ...\r" << std::endl;
	std::cout << "Sending test msg: @SN?\r" << std::endl;
	pgpDev.sendString( "@SN?\r" );	// Test Pattern On

    while( 1 )
	{
		sleep(1);
		int nRead = pgpDev.readBytes( recvBuffer, timeout, S_SENDBUFFER_MAX );
		if ( nRead <= 0 )
			std::cerr << "No response!" << std::endl;
        else
		{
			std::cout << "Rcvd: " << std::endl;
			unsigned char	cData;
			for ( size_t i=0; i < (size_t) nRead; ++i )
			{
				cData = recvBuffer[i];
				switch( cData )
				{
				default:
					if ( isprint(cData ) )
						putchar( cData );
					else
						printf( "<\?\?\?>(0x%02X)\n", cData );	break;
					break;
				case 0x06:	printf( "<ACK>(0x%02X)\n", cData );	break;
				case 0x25:	printf( "<NAK>(0x%02X)\n", cData );	break;
				case '\n':	printf( "<NL>(0x%02X)\n", cData );	break;
				case '\r':	printf( "<CR>(0x%02X)\n", cData );	break;
				}
			}
		}

		std::cout << "Send? ";
		std::cin.getline( &inBuffer[0], S_SENDBUFFER_MAX );

		sendBuffer = MapEscapeChars( std::string(inBuffer) );
		if ( sendBuffer.size() == 0 )
			break;
		pgpDev.sendString( sendBuffer );
    };

    // close();

    return (1);
}

void usage( const char * msg )
{
	if ( msg )
		printf( "%s\n", msg );
	printf( "Usage: pgpClSerialTool [-h] [-v] [-u N] [-c N]\n" );
	printf( "       -h    Show this usage message.\n" );
	printf( "       -v    Verbose mode.\n" );
	printf( "       -b N  board number.\n" );
	printf( "       -c N  Channel number.\n" );
}


int
main( int argc, char **argv )
{
    long    status;        /* return status from command */
    int     board = 0;
    int     verbose = 0;
    double  timeout = 0.0;
    int     channel = 0;

	char c;
	std::string device;
	while((c = getopt(argc, argv, "hvc:d:t:")) != EOF)
	{
		switch(c)
		{
		case 'v':
			verbose = 1;
			break;
		case 'd':
			device = optarg;
			break;
		case 'b':
			board = atoi(optarg);
			break;
		case 'c':
			channel = atoi(optarg);
			break;
		case 't':
			timeout = atof(optarg);
			break;
		case 'h':
		default:
			usage(argv[0]);
			return 1;
		}
	}

//	terminateMemoryOrder.store(false, std::memory_order_release);
//	signal(SIGINT, int_handler);

    if ((timeout == 0.0))
    	timeout = 0.5;

	printf("-- Rogue Version: %s\n", rogue::Version::current().c_str());

	pgpClSerialDev	pgpDev( board, channel );
	try
	{
		pgpDev.connect();

		status = SendMsgLoop( pgpDev, timeout, verbose );
	}
	catch ( rogue::GeneralError & e )
	{
		std::cerr << "pgpClSerialTool caught rogue exception:" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cerr << "pgpClSerialTool caught exception: " << e.what() << std::endl;
	}
	pgpDev.disconnect();

    exit(status);
}
