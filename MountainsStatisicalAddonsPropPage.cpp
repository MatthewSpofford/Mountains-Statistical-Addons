// MountainsStatisicalAddonsPropPage.cpp : Implementation of the CMountainsStatisicalAddonsPropPage property page class.

#include "pch.h"
#include "framework.h"
#include "Mountains-Statisical-Addons.h"
#include "MountainsStatisicalAddonsPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMountainsStatisicalAddonsPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CMountainsStatisicalAddonsPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMountainsStatisicalAddonsPropPage, "MFCACTIVEXCONT.MountainsStatisicalAddonsPropPage.1",
	0x1db3323e,0x6341,0x4902,0xb7,0xe4,0x70,0x74,0x9a,0x3f,0xf6,0xca)

// CMountainsStatisicalAddonsPropPage::CMountainsStatisicalAddonsPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMountainsStatisicalAddonsPropPage

BOOL CMountainsStatisicalAddonsPropPage::CMountainsStatisicalAddonsPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MOUNTAINSSTATISICALADDONS_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// CMountainsStatisicalAddonsPropPage::CMountainsStatisicalAddonsPropPage - Constructor

CMountainsStatisicalAddonsPropPage::CMountainsStatisicalAddonsPropPage() :
	COlePropertyPage(IDD, IDS_MOUNTAINSSTATISICALADDONS_PPG_CAPTION)
{
}

// CMountainsStatisicalAddonsPropPage::DoDataExchange - Moves data between page and properties

void CMountainsStatisicalAddonsPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMountainsStatisicalAddonsPropPage message handlers
