#pragma once

// Mountains-Statisical-Addons.h : main header file for Mountains-Statisical-Addons.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CMountainsStatisicalAddonsApp : See Mountains-Statisical-Addons.cpp for implementation.

class CMountainsStatisicalAddonsApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

