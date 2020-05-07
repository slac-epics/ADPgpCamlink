

#include <iostream>
#include <getopt.h>
#include "pgpClSerialDev.h"


long
SendMsgLoop(
	pgpClSerialDev	&	pgpDev,
	int					timeout,
	int					verbose	)
{
	const size_t	S_SENDBUFFER_MAX	= 256;
	char		sendBuffer[S_SENDBUFFER_MAX];
	char		recvBuffer[S_SENDBUFFER_MAX];

	pgpDev.sendBytes( "@TP1\r", 5 );	// Test Pattern On

    while( 1 )
	{
		std::cout << "Send? ";
		std::cin.getline( &sendBuffer[0], S_SENDBUFFER_MAX );

		pgpDev.sendBytes( sendBuffer, strnlen( sendBuffer, S_SENDBUFFER_MAX ) );

#if 0
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

    if ((timeout == 0))
    	timeout = 60000;

	pgpClSerialDev	pgpDev( board, channel );

    status = SendMsgLoop( pgpDev, timeout, verbose );
	//pgpDev.close();

    exit(status);
}
