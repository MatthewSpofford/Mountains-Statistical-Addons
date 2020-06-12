// MountainsStatisicalAddonsCtrl.cpp : Implementation of the CMountainsStatisicalAddonsCtrl ActiveX Control class.

#include "pch.h"
#include "framework.h"
#include "Mountains-Statisical-Addons.h"
#include "MountainsStatisicalAddonsCtrl.h"
#include "MountainsStatisicalAddonsPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMountainsStatisicalAddonsCtrl, COleControl)

// Message map

BEGIN_MESSAGE_MAP(CMountainsStatisicalAddonsCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Dispatch map

BEGIN_DISPATCH_MAP(CMountainsStatisicalAddonsCtrl, COleControl)
	DISP_FUNCTION_ID(CMountainsStatisicalAddonsCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// Event map

BEGIN_EVENT_MAP(CMountainsStatisicalAddonsCtrl, COleControl)
END_EVENT_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMountainsStatisicalAddonsCtrl, 1)
	PROPPAGEID(CMountainsStatisicalAddonsPropPage::guid)
END_PROPPAGEIDS(CMountainsStatisicalAddonsCtrl)

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMountainsStatisicalAddonsCtrl, "MFCACTIVEXCONTRO.MountainsStatisicalAddonsCtrl.1",
	0x1b777728,0xf285,0x4da8,0x81,0xaf,0x07,0x77,0xf9,0x7b,0x6d,0x51)

// Type library ID and version

IMPLEMENT_OLETYPELIB(CMountainsStatisicalAddonsCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs

const IID IID_DMountainsStatisicalAddons = {0xc8d88fe4,0x1860,0x4add,{0x88,0xdc,0x39,0x3a,0x78,0x67,0x77,0x22}};
const IID IID_DMountainsStatisicalAddonsEvents = {0x0a210d0d,0x2836,0x499f,{0xb9,0x1a,0x3c,0xc8,0xe6,0x0b,0x35,0xe0}};

// Control type information

static const DWORD _dwMountainsStatisicalAddonsOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMountainsStatisicalAddonsCtrl, IDS_MOUNTAINSSTATISICALADDONS, _dwMountainsStatisicalAddonsOleMisc)

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMountainsStatisicalAddonsCtrl

BOOL CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_MOUNTAINSSTATISICALADDONS,
			IDB_MOUNTAINSSTATISICALADDONS,
			afxRegApartmentThreading,
			_dwMountainsStatisicalAddonsOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// Licensing strings

static const TCHAR _szLicFileName[] = _T("LICENSE");
static const WCHAR _szLicString[] = L"MIT License";

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::VerifyUserLicense -
// Checks for existence of a user license

BOOL CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::VerifyUserLicense()
{
	return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName,
		_szLicString);
}

// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::GetLicenseKey -
// Returns a runtime licensing key

BOOL CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrlFactory::GetLicenseKey(DWORD dwReserved,
	BSTR *pbstrKey)
{
	if (pbstrKey == nullptr)
		return FALSE;

	*pbstrKey = SysAllocString(_szLicString);
	return (*pbstrKey != nullptr);
}


// CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrl - Constructor

CMountainsStatisicalAddonsCtrl::CMountainsStatisicalAddonsCtrl()
{
	InitializeIIDs(&IID_DMountainsStatisicalAddons, &IID_DMountainsStatisicalAddonsEvents);
	// TODO: Initialize your control's instance data here.
}

// CMountainsStatisicalAddonsCtrl::~CMountainsStatisicalAddonsCtrl - Destructor

CMountainsStatisicalAddonsCtrl::~CMountainsStatisicalAddonsCtrl()
{
	// TODO: Cleanup your control's instance data here.
}

// CMountainsStatisicalAddonsCtrl::OnDraw - Drawing function

void CMountainsStatisicalAddonsCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CMountainsStatisicalAddonsCtrl::DoPropExchange - Persistence support

void CMountainsStatisicalAddonsCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}


// CMountainsStatisicalAddonsCtrl::OnResetState - Reset control to default state

void CMountainsStatisicalAddonsCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// CMountainsStatisicalAddonsCtrl::AboutBox - Display an "About" box to the user

void CMountainsStatisicalAddonsCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MOUNTAINSSTATISICALADDONS);
	dlgAbout.DoModal();
}


// CMountainsStatisicalAddonsCtrl message handlers
