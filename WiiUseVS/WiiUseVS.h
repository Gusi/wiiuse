// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the WIIUSEVS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// WIIUSEVS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WIIUSEVS_EXPORTS
#define WIIUSEVS_API __declspec(dllexport)
#else
#define WIIUSEVS_API __declspec(dllimport)
#endif

// This class is exported from the WiiUseVS.dll
class WIIUSEVS_API CWiiUseVS {
public:
	CWiiUseVS(void);
	// TODO: add your methods here.
};

extern WIIUSEVS_API int nWiiUseVS;

WIIUSEVS_API int fnWiiUseVS(void);
