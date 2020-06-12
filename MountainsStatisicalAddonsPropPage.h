#pragma once

// MountainsStatisicalAddonsPropPage.h : Declaration of the CMountainsStatisicalAddonsPropPage property page class.


// CMountainsStatisicalAddonsPropPage : See MountainsStatisicalAddonsPropPage.cpp for implementation.

class CMountainsStatisicalAddonsPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMountainsStatisicalAddonsPropPage)
	DECLARE_OLECREATE_EX(CMountainsStatisicalAddonsPropPage)

// Constructor
public:
	CMountainsStatisicalAddonsPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_MOUNTAINSSTATISICALADDONS };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

