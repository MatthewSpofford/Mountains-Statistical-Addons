// Mountains-Statistical-Addons.cpp : Implementation of CMountainsStatisicalAddonsApp and DLL registration.

#include "pch.h"
#include "MountainsStatisticalAddons.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMountainsStatisicalAddonsApp theApp;

const GUID CDECL _tlid = {0x647044bd,0xdec7,0x4ec2,{0xb7,0x86,0x78,0x71,0xa1,0xf6,0xd6,0x31}};
const WORD _wVerMajor = 0;
const WORD _wVerMinor = 1;


// CMountainsStatisicalAddonsApp::InitInstance - DLL initialization
BOOL CMountainsStatisicalAddonsApp::InitInstance()
{
    BOOL bInit = COleControlModule::InitInstance();

    if (bInit)
    {
        // TODO: Add your own module initialization code here.
    }

    return bInit;
}


// CMountainsStatisicalAddonsApp::ExitInstance - DLL termination
int CMountainsStatisicalAddonsApp::ExitInstance()
{
    // TODO: Add your own module termination code here.

    return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    AFX_MANAGE_STATE(_afxModuleAddrThis);

    if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
        return ResultFromScode(SELFREG_E_TYPELIB);

    if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
        return ResultFromScode(SELFREG_E_CLASS);

    return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry
STDAPI DllUnregisterServer(void)
{
    AFX_MANAGE_STATE(_afxModuleAddrThis);

    if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
        return ResultFromScode(SELFREG_E_TYPELIB);

    if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
        return ResultFromScode(SELFREG_E_CLASS);

    return NOERROR;
}
