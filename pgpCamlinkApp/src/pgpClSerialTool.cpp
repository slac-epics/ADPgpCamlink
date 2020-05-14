

#include <atomic>
#include <iostream>
#include <signal.h>
#include <getopt.h>
#include <rogue/Version.h>
#include "pgpClSerialDev.h"


std::atomic<bool> terminateMemoryOrder;

void int_handler(int dummy)
{
    terminateMemoryOrder.store(true, std::memory_order_release);
    // dmaUnMapDma();
}

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
	int					timeout,
	int					verbose	)
{
	const size_t	S_SENDBUFFER_MAX	= 256;
	char		inBuffer[S_SENDBUFFER_MAX];
	std::string		sendBuffer;

	std::cout << "Sending test msg: @SN?\r" << std::endl;
	pgpDev.sendString( "@SN?\r" );	// Test Pattern On

	std::cout << "Hit Ctrl-C to exit ...\r" << std::endl;
    while( 1 )
	{
		std::cout << "Send? ";
		std::cin.getline( &inBuffer[0], S_SENDBUFFER_MAX );

		sendBuffer = MapEscapeChars( std::string(inBuffer) );
		pgpDev.sendString( sendBuffer );

#if 0
		char		recvBuffer[S_SENDBUFFER_MAX];
		// TODO: pgpDev.clSerialRx currently implements ClSerialSlave::acceptFrame() and just prints response.
		getBytes( recvBuffer, S_SENDBUFFER_MAX, timeout );
        std::cout << "Recv: " << recvBuffer << std::endl;
#endif
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
    int     timeout = 0;
    int     channel = 0;

#if 1
	char c;
	std::string device;
	while((c = getopt(argc, argv, "hc:d:")) != EOF)
	{
		switch(c)
		{
		case 'd':
			device = optarg;
			break;
		case 'b':
			board = atoi(optarg);
			break;
		case 'c':
			channel = atoi(optarg);
			break;
		case 'h':
		default:
			usage(argv[0]);
			return 1;
		}
	}

#else
    --argc;
    ++argv;
    while ((argc > 0) && ((argv[0][0] == '-') || (argv[0][0] == '/')))
    {
        switch (argv[0][1])
        {
            case 'b':        /* device board number */
                ++argv;
                --argc;
                if (argc < 1) 
                {
                    usage("Error: option 'b' requires a numeric argument\n");
                    exit(1);
                }
                if ((argv[0][0] >= '0') && (argv[0][0] <= '9'))
                {
                    board = atoi(argv[0]);
                }
                else 
                {
                    usage("Error: option 'u' requires a numeric argument\n");
                    exit(1);
                }
                break;

            case 't':
                ++argv;
                --argc;
                if (argc < 1) {
                usage("Error: option 't' requires argument\n");
                exit(1);
                }
                if ((argv[0][0] >= '0') && (argv[0][0] <= '9'))
                timeout = atoi(argv[0]);
                break;

            case 'v':
                verbose = 1;
                break;

            case '-':
                if (strcmp(argv[0], "--help") == 0) {
                usage("");
                exit(0);
                } else {
                fprintf(stderr, "unknown option: %s\n", argv[0]);
                usage("");
                exit(1);
                }
                break;

            case 'h':
                usage("");
                exit(0);
                break;

            case 'c':
                ++argv;
                --argc;
                if (argc < 1)
                {
                usage("Error - channel # expected\n");
                exit(-1);
                }
                channel = atoi(argv[0]);
                break;

            default:
                usage("unknown flag\n");
                exit(1);
                break;
        }
        argc--;
        argv++;
    }
#endif

	terminateMemoryOrder.store(false, std::memory_order_release);
	signal(SIGINT, int_handler);

    if ((timeout == 0))
    	timeout = 60000;

	printf("-- Rogue Version: %s\n", rogue::Version::current().c_str());

	pgpClSerialDev	pgpDev( board, channel );

    status = SendMsgLoop( pgpDev, timeout, verbose );
	//pgpDev.close();

    exit(status);
}
