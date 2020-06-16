// MountainsStatisticalAddonsPropPage.cpp : Implementation of the CMountainsStatisticalAddonsPropPage property page class.

#include "pch.h"
#include "MountainsStatisticalAddons.h"
#include "MountainsStatisticalAddonsPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMountainsStatisticalAddonsPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CMountainsStatisticalAddonsPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMountainsStatisticalAddonsPropPage, "MFCACTIVEXCONT.MountainsStatisticalAddonsPropPage.1",
	0x1db3323e,0x6341,0x4902,0xb7,0xe4,0x70,0x74,0x9a,0x3f,0xf6,0xca)

// CMountainsStatisticalAddonsPropPage::CMountainsStatisticalAddonsPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMountainsStatisticalAddonsPropPage

BOOL CMountainsStatisticalAddonsPropPage::CMountainsStatisticalAddonsPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MOUNTAINSSTATISTICALADDONS_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// CMountainsStatisticalAddonsPropPage::CMountainsStatisticalAddonsPropPage - Constructor

CMountainsStatisticalAddonsPropPage::CMountainsStatisticalAddonsPropPage() :
	COlePropertyPage(IDD, IDS_MOUNTAINSSTATISTICALADDONS_PPG_CAPTION)
{
}

// CMountainsStatisticalAddonsPropPage::DoDataExchange - Moves data between page and properties

void CMountainsStatisticalAddonsPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMountainsStatisticalAddonsPropPage message handlers
