#pragma once

// MountainsStatisticalAddonsPropPage.h : Declaration of the CMountainsStatisticalAddonsPropPage property page class.
class CMountainsStatisticalAddonsPropPage : public COlePropertyPage
{
    DECLARE_DYNCREATE(CMountainsStatisticalAddonsPropPage)
    DECLARE_OLECREATE_EX(CMountainsStatisticalAddonsPropPage)

// Constructor
public:
    CMountainsStatisticalAddonsPropPage();

// Dialog Data
    enum { IDD = IDD_PROPPAGE_MOUNTAINSSTATISTICALADDONS };

// Implementation
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
    DECLARE_MESSAGE_MAP()
};

