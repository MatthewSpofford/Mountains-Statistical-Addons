#pragma once

// Mountains-Statistical-Addons.h : main header file for Mountains-Statistical-Addons.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "../resources/Resource.h"       // main symbols

class CMountainsStatisicalAddonsApp : public COleControlModule
{
public:
    BOOL InitInstance();
    int ExitInstance();
};

extern const GUID CDECL TLID;
extern const WORD VERSION_MAJOR;
extern const WORD VERSION_MINOR;

