#include "Python.h"


static void check(PyObject* obj)
{
    if (!obj) {
        PyErr_Print();
        throw "**** python error\n";
    }
}

int	generic_python_func_call( )
{
    // returns new reference
    PyObject* pModule = PyImport_ImportModule("psalg.configdb.tt_config");
    check(pModule);
    // returns borrowed reference
    PyObject* pDict = PyModule_GetDict(pModule);
    check(pDict);
    // returns borrowed reference
    PyObject* pFunc = PyDict_GetItemString(pDict, (char*)"tt_config");
    check(pFunc);
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
    // PyObject* pModule = PyImport_ImportModule("ClinkDev");
    PyObject* pModule = PyImport_ImportModule("pgpCamlink");
    check(pModule);
    // returns borrowed reference
    PyObject* pDict = PyModule_GetDict(pModule);
    check(pDict);
	// Get Camlink attr
	//PyObject * attr = PyObject_GetAttrString( pModule, "ClinkDev" );
	PyObject * attr = PyObject_GetAttrString( pModule, "pgpCamlink" );
    check(attr);

#if 1
	PyObject * argList = Py_BuildValue(	"(s[ss]si)",
										"/dev/datadev_0",
										"Opal1000", NULL,
										"config/defaults_Opal1000.yml",
										9099 );
#else
	PyObject * argList = Py_BuildValue(	"(sssiiii[ss]si)",
										"ClinkDev",
										"Container for CameraLink Dev",
										"/dev/datadev_0",
										0, 1, 1, 4,
										"Opal1000", NULL,
										"config/defaults_Opal1000.yml",
										9099 );
#endif
	PyObject	*	pClinkDev = PyObject_CallObject( attr, argList );
    check(pClinkDev);

	return pClinkDev;
}


int main (int argc, char **argv)
{
	int		status	= 0;

	Py_Initialize();

	PyObject *	pClinkDev = createClinkDev( );

	// generic_python_func_call( );

	return status;
}
