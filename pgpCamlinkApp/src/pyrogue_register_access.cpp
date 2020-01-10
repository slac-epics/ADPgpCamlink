#include <string>
#include <Python.h>
//#include <boost/python.hpp>
#include "rogue/interfaces/ZmqClient.h"


static void check(PyObject* obj, const char * pContext )
{
    if (!obj) {
		printf( "check %s: NULL PyObject!\n", pContext );
        PyErr_Print();
        throw "**** python error\n";
    }
}

void showPyObject_Dir( PyObject * obj, const char * pszObjName )
{
	PyObject * objAttributes = PyObject_Dir(obj);
	if ( !objAttributes )
	{
		printf( "PyObject_Dir %s: NULL dir obj!\n", pszObjName );
		return;
	}

	Py_ssize_t attrSize = PyList_Size(objAttributes);
	printf( "PyObject_Dir %s: %ld entries\n", pszObjName, attrSize );
	for ( Py_ssize_t pos = 0; pos < attrSize; pos++ )
	{
		PyObject * attrValue = PyList_GetItem(objAttributes, pos);
		if ( !attrValue )
			printf( "	NULL!\n" );
#if 1
		printf( ", %s", PyUnicode_AsUTF8( attrValue ) );
#else
		printf( "	%s\n", PyUnicode_AsUTF8( attrValue ) );
#endif
	}
	printf( "\n" );
}

int	generic_python_func_call( )
{
    // returns new reference
    PyObject* pModule = PyImport_ImportModule("psalg.configdb.tt_config");
    check(pModule, "PyImport_ImportModule(psalg.configdb.tt_config");
    // returns borrowed reference
    PyObject* pDict = PyModule_GetDict(pModule);
    check(pDict,"PyModule_GetDict(pModule)");
    // returns borrowed reference
    PyObject* pFunc = PyDict_GetItemString(pDict, (char*)"tt_config");
    check(pFunc,"PyDict_GetItemString(pDict, (char*)\"tt_config\")");
    // need to get the dbase connection info via collection
    // returns new reference
    // FIXME: should get "HSD:DEV02" from drp cmd line, and "BEAM" from config phase1.
    //PyObject* mybytes = PyObject_CallFunction(pFunc,"ssss",m_connect_json.c_str(),"HSD:DEV02", "BEAM", m_para->detName.c_str());
    //check(mybytes);
    // returns new reference
    //PyObject * json_bytes = PyUnicode_AsASCIIString(mybytes);
    //check(json_bytes);
    //char* json = (char*)PyBytes_AsString(json_bytes);

	return 0;
}

PyObject *	createClinkDev( )
{
    // Just setup python paths
    // (void) PyImport_ImportModule("setupLibPaths");
    // returns new reference
#if 1
	PyObject* pModule = PyImport_ImportModule("ClinkDev");
    check(pModule, "PyImport_ImportModule(\"ClinkDev\")");
#else
    PyObject* pModule = PyImport_ImportModule("pgpCamlink");
    check(pModule, "PyImport_ImportModule(\"pgpCamlink\")");
#endif
    // returns borrowed reference
    PyObject* pDict = PyModule_GetDict(pModule);
    check(pDict,"PyModule_GetDict(pModule)");

	// Get Camlink attr
#if 0
	PyObject * attr = PyObject_GetAttrString( pModule, "pgpCamlink" );
    check(attr,"PyObject_GetAttrString( pModule, \"pgpCamlink\" )");
#if 1
	// Looks like dict only works if function has explicit kwargs parameter 
	PyObject * argList = Py_BuildValue(	"({s:s,s:[ss],s:i,s:s,s:i})",
										"dev",			"/dev/datadev_0",
										"camType",		"Opal1000", NULL,
										"pollEn",		1,
										"defaultFile",	"config/defaults_Opal1000.yml",
										"serverPort",	9199 );
#else
	PyObject * argList = Py_BuildValue(	"(s[ss]isi)",
										"/dev/datadev_0",
										"Opal1000", NULL,
										1,
										"config/defaults_Opal1000.yml",
										9199
										);
#endif
#else
	PyObject * attr = PyObject_GetAttrString( pModule, "ClinkDev" );
    check(attr,"PyObject_GetAttrString( pModule, \"ClinkDev\" )");
	PyObject * argList = Py_BuildValue(	"(sssiiii[ss]si)",
										"ClinkDev",
										"Container for CameraLink Dev",
										"/dev/datadev_0",
										0, 1, 1, 4,
										"Opal1000", NULL,
										"config/defaults_Opal1000.yml",
										9199 );
#endif
	PyObject	*	pClinkDev = PyObject_CallObject( attr, argList );
    check(pClinkDev,"PyObject_CallObject( attr, argList )");

	printf( "Successfully created pgpCamLink object!\n" );
	return pClinkDev;
}

//	std::string	rogueVersion		= zmq->getDisp( "ClinkDev.RogueVersion" );
//	std::string	disablePollStatus	= zmq->setDisp( "ClinkDev.PollEn", "False" );
//	std::string	enablePolltatus		= zmq->setDisp( "ClinkDev.PollEn", "True" );
//
std::string		ClinkDevGetRogueVersion(
	PyObject	*	pClinkDev )
{
	// Get RogueVersion function
	PyObject * attr = PyObject_GetAttrString( pClinkDev, "RogueVersion" );
    check(attr,"PyObject_GetAttrString( pClinkDev, \"RogueVersion\" )");

	// Get value function
	PyObject * pfunc = PyObject_GetAttrString( attr, "value" );
    check(pfunc, "PyObject_GetAttrString( attr, \"value\" )");

	PyObject	*	pyRogueVersion = PyObject_CallObject( pfunc, NULL );
    check(pyRogueVersion, "PyObject_CallObject( pfunc, NULL )");

	std::string		strRogueVersion( PyUnicode_AsUTF8( pyRogueVersion ) );
	return strRogueVersion;
}

std::string	ClinkDevGetPollEn(
	PyObject	*	pClinkDev )
{
	// Get pyPollEn function
	PyObject * pyPollEn = PyObject_GetAttrString( pClinkDev, "PollEn" );
    check(pyPollEn, "PyObject_GetAttrString( pClinkDev, \"PollEn\" )");

	// Get PollEn.value function
	PyObject * pfunc = PyObject_GetAttrString( pyPollEn, "value" );
    check(pfunc, "PyObject_GetAttrString( pyPollEn, \"value\" )");

	PyObject	*	pyPollEnVal = PyObject_CallObject( pfunc, NULL );
    check(pyPollEnVal, "PyObject_CallObject( pfunc, NULL )");

	int		fPollEn = PyObject_IsTrue( pyPollEnVal );
	std::string		strPollEn( fPollEn ? "True" : "False" );
	return strPollEn;
}

void	ClinkDevStop(
	PyObject	*	pClinkDev )
{
	// Get function
	PyObject * pfunc = PyObject_GetAttrString( pClinkDev, "stop" );
	if ( !pfunc )
	{
		printf( "ClinkDevStop: stop function not found!\n" );
		showPyObject_Dir( pClinkDev, "pClinkDev" );
		return;
	}

    check(pfunc, "PyObject_GetAttrString( pClinkDev, \"stop\" )");

	PyObject	*	pyResult = PyObject_CallObject( pfunc, NULL );
    check(pyResult, "PyObject_CallObject( pfunc, NULL )");
}

int zmqServerTest()
{
	printf("Creating zmq interface.\n");fflush(stdout);

	rogue::interfaces::ZmqClientPtr	zmq;
	zmq = rogue::interfaces::ZmqClient::create("localhost", 9199);
	printf("ZMQ Created. Setting timeout.\n");fflush(stdout);
	zmq->setTimeout(180000);
	printf("Waiting 5s for connection to start\n");fflush(stdout);
	sleep(5);

	std::string	rogueVersion		= zmq->getDisp( "ClinkDev.RogueVersion" );
	printf( "zmqServerTest: Rouge Version: %s\n", rogueVersion.c_str() );

	std::string	scratchPad		= zmq->getDisp( "ClinkDev.Hardware.AxiPcieCore.AxiVersion.ScratchPad" );
	printf( "zmqServerTest: scratchPad: %s\n", scratchPad.c_str() );

	zmq->setDisp( "ClinkDev.Hardware.AxiPcieCore.AxiVersion.ScratchPad", "22" );
	printf( "zmqServerTest: set scratchPad = %s\n", "22" );

	scratchPad = zmq->getDisp( "ClinkDev.Hardware.AxiPcieCore.AxiVersion.ScratchPad" );
	printf( "zmqServerTest: scratchPad: %s\n", scratchPad.c_str() );

	return 0;
}

int main (int argc, char **argv)
{
	int		status	= 0;

	Py_Initialize();

	PyObject *	pClinkDev = createClinkDev( );
	showPyObject_Dir( pClinkDev, "pClinkDev" );

	std::string		vers = ClinkDevGetRogueVersion( pClinkDev );
	printf( "Rouge Version: %s\n", vers.c_str() );

	//showPyObject_Dir( pClinkDev, "pClinkDev" );
	printf( "Poll Enable: %s\n", ClinkDevGetPollEn( pClinkDev ).c_str() );

	// Try ZMQ server
	zmqServerTest();

	ClinkDevStop( pClinkDev );
	//showPyObject_Dir( pClinkDev, "pClinkDev" );

	Py_Finalize();
	return status;
}
