#pragma once

// MountainsStatisicalAddonsCtrl.h : Declaration of the CMountainsStatisicalAddonsCtrl ActiveX Control class.


// CMountainsStatisicalAddonsCtrl : See MountainsStatisicalAddonsCtrl.cpp for implementation.

class CMountainsStatisicalAddonsCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMountainsStatisicalAddonsCtrl)

// Constructor
public:
	CMountainsStatisicalAddonsCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMountainsStatisicalAddonsCtrl();

	BEGIN_OLEFACTORY(CMountainsStatisicalAddonsCtrl)        // Class factory and guid
		virtual BOOL VerifyUserLicense();
		virtual BOOL GetLicenseKey(DWORD, BSTR *);
	END_OLEFACTORY(CMountainsStatisicalAddonsCtrl)

	DECLARE_OLETYPELIB(CMountainsStatisicalAddonsCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMountainsStatisicalAddonsCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMountainsStatisicalAddonsCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};
};

