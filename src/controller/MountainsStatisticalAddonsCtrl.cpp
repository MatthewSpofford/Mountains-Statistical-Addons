#include "pch.h"
#include "MountainsStatisticalAddonsCtrl.h"

#include "../MountainsStatisticalAddons.h"
#include "../MountainsStatisticalAddonsPropPage.h"
#include "../AddonDispatchID.h"

#include "../AddonEntity.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMountainsStatisticalAddonsCtrl, COleControl)

// Message map
BEGIN_MESSAGE_MAP(CMountainsStatisticalAddonsCtrl, COleControl)
    ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Dispatch map
BEGIN_DISPATCH_MAP(CMountainsStatisticalAddonsCtrl, COleControl)
    DISP_FUNCTION_ID(CMountainsStatisticalAddonsCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
    DISP_FUNCTION_ID(CMountainsStatisticalAddonsCtrl, "OnInit", DISPID_ONINIT, OnInit, VT_EMPTY, VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH)
    DISP_PROPERTY_EX_ID(CMountainsStatisticalAddonsCtrl, "UnitSystem", DISPID_UNITSYSTEM, GetUnitSystem, SetUnitSystem, VT_I2)
    DISP_FUNCTION_ID(CMountainsStatisticalAddonsCtrl, "OnButtonClick", DISPID_ONBUTTONCLICK, OnButtonClick, VT_EMPTY, VTS_BSTR VTS_BOOL VTS_PBOOL)
    DISP_FUNCTION_ID(CMountainsStatisticalAddonsCtrl, "OnUpdateButton", DISPID_ONUPDATEBUTTON, OnUpdateButton, VT_EMPTY, VTS_BSTR VTS_PBOOL VTS_PBOOL VTS_PBOOL)
END_DISPATCH_MAP()

// Event map
BEGIN_EVENT_MAP(CMountainsStatisticalAddonsCtrl, COleControl)
END_EVENT_MAP()

// Property pages
BEGIN_PROPPAGEIDS(CMountainsStatisticalAddonsCtrl, 1)
    PROPPAGEID(CMountainsStatisticalAddonsPropPage::guid)
END_PROPPAGEIDS(CMountainsStatisticalAddonsCtrl)

// Initialize class factory and guid
IMPLEMENT_OLECREATE_EX(CMountainsStatisticalAddonsCtrl, "MFCACTIVEXCONTRO.MountainsStatisticalAddonsCtrl.1",
    0x1b777728,0xf285,0x4da8,0x81,0xaf,0x07,0x77,0xf9,0x7b,0x6d,0x51)

// Type library ID and version
IMPLEMENT_OLETYPELIB(CMountainsStatisticalAddonsCtrl, TLID, VERSION_MAJOR, VERSION_MINOR)

// Interface IDs
const IID IID_DMountainsStatisicalAddons = {0xc8d88fe4,0x1860,0x4add,{0x88,0xdc,0x39,0x3a,0x78,0x67,0x77,0x22}};
const IID IID_DMountainsStatisicalAddonsEvents = {0x0a210d0d,0x2836,0x499f,{0xb9,0x1a,0x3c,0xc8,0xe6,0x0b,0x35,0xe0}};

// Control type information
static const DWORD _dwMountainsStatisticalAddonsOleMisc =
    OLEMISC_ACTIVATEWHENVISIBLE |
    OLEMISC_SETCLIENTSITEFIRST |
    OLEMISC_INSIDEOUT |
    OLEMISC_CANTLINKINSIDE |
    OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMountainsStatisticalAddonsCtrl, IDS_MOUNTAINSSTATISTICALADDONS, _dwMountainsStatisticalAddonsOleMisc)

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMountainsStatisticalAddonsCtrl
BOOL CMountainsStatisticalAddonsCtrl::CMountainsStatisticalAddonsCtrlFactory::UpdateRegistry(BOOL bRegister)
{
    // TODO: Verify that your control follows apartment-model threading rules.
    // Refer to MFC TechNote 64 for more information.
    // If your control does not conform to the apartment-model rules, then
    // you must modify the code below, changing the 6th parameter from
    // afxRegApartmentThreading to 0.
    if (bRegister)
        return AfxOleRegisterControlClass(
            AfxGetInstanceHandle(),
            m_clsid,
            m_lpszProgID,
            IDS_MOUNTAINSSTATISTICALADDONS,
            IDB_MOUNTAINSSTATISTICALADDONS,
            afxRegApartmentThreading,
            _dwMountainsStatisticalAddonsOleMisc,
            TLID,
            VERSION_MAJOR,
            VERSION_MINOR);
    else
        return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// Licensing strings
static const TCHAR _szLicFileName[] = _T("LICENSE");
static const WCHAR _szLicString[] = L"MIT License";

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::VerifyUserLicense -
// Checks for existence of a user license
BOOL CMountainsStatisticalAddonsCtrl::CMountainsStatisticalAddonsCtrlFactory::VerifyUserLicense()
{
    return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName,
        _szLicString);
}

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::GetLicenseKey -
// Returns a runtime licensing key
BOOL CMountainsStatisticalAddonsCtrl::CMountainsStatisticalAddonsCtrlFactory::GetLicenseKey(DWORD dwReserved,
    BSTR *pbstrKey)
{
    if (pbstrKey == nullptr)
        return FALSE;

    *pbstrKey = SysAllocString(_szLicString);
    return (*pbstrKey != nullptr);
}


// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrl - Constructor

CMountainsStatisticalAddonsCtrl::CMountainsStatisticalAddonsCtrl() {
    InitializeIIDs(&IID_DMountainsStatisicalAddons, &IID_DMountainsStatisicalAddonsEvents);
    spy.CreateInstance(__uuidof(SpyTools));
    spy->WriteText("ADDON: Statisitcal addon initialized");
}

// CMountainsStatisicalAddonsCtrl::~CMountainsStatisicalAddonsCtrl - Destructor

CMountainsStatisticalAddonsCtrl::~CMountainsStatisticalAddonsCtrl()
{
    // TODO: Cleanup your control's instance data here.
}

// CMountainsStatisicalAddonsCtrl::OnDraw - Drawing function
void CMountainsStatisticalAddonsCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
    if (!pdc)
        return;

    int nSavedDC = pdc->SaveDC();


    pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
    pdc->Ellipse(rcBounds);

    pdc->RestoreDC(nSavedDC);
}

// CMountainsStatisicalAddonsCtrl::DoPropExchange - Persistence support
void CMountainsStatisticalAddonsCtrl::DoPropExchange(CPropExchange* pPX)
{
    ExchangeVersion(pPX, MAKELONG(VERSION_MINOR, VERSION_MAJOR));
    COleControl::DoPropExchange(pPX);

    // TODO: Call PX_ functions for each persistent custom property.
}

// CPythonActiveXStudyCtrl::GetControlFlags -
// Used to configure MFC ActiveX control behaviour
DWORD CMountainsStatisticalAddonsCtrl::GetControlFlags() {
    DWORD dwFlags = COleControl::GetControlFlags();

    dwFlags |= noFlickerActivate;

    return dwFlags;
}

// CMountainsStatisicalAddonsCtrl::OnResetState - Reset control to default state
void CMountainsStatisticalAddonsCtrl::OnResetState()
{
    COleControl::OnResetState();  // Resets defaults found in DoPropExchange

    // TODO: Reset any other control state here.
}


// CMountainsStatisicalAddonsCtrl::AboutBox - Display an "About" box to the user
void CMountainsStatisticalAddonsCtrl::AboutBox()
{
    CDialogEx dlgAbout(IDD_ABOUTBOX_MOUNTAINSSTATISTICALADDONS);
    dlgAbout.DoModal();
}


void CMountainsStatisticalAddonsCtrl::OnInit(
    IDispatch* dispMountains,
    IDispatch* studiables,
    IDispatch* parameterHandler) {

    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    AddonEntity& addon = AddonEntity::getInstance();
    addon.setMountains(dispMountains);
    addon.setStudiables(studiables);
    addon.setParamHandler(parameterHandler);
}

void CMountainsStatisticalAddonsCtrl::OnButtonClick(LPCTSTR id, BOOL ehecked, BOOL* modified) {
    spy->WriteText("ADDON: Button has beeen clicked!");
}

void CMountainsStatisticalAddonsCtrl::OnUpdateButton(
    LPCTSTR id,
    BOOL* enable,
    BOOL* checked,
    BOOL* activeOnMultiSelection) {

}

SHORT CMountainsStatisticalAddonsCtrl::GetUnitSystem() {
    return unitSystem;
}

void CMountainsStatisticalAddonsCtrl::SetUnitSystem(SHORT value) {
    unitSystem = value;

    InvalidateControl();
    SetModifiedFlag();
}

void CMountainsStatisticalAddonsCtrl::Serialize(CArchive& ar) {
    __super::Serialize(ar);
}