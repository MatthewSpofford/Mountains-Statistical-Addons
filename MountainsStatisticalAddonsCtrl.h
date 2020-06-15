#pragma once

//#pragma warning (disable : 4192)
// import the Mountains COM interfaces
#import "libid:65BC4ADE-251B-4B4C-8EA5-CFB75162D5EE" version("3.0")
//#pragma warning (default : 4192)

// Mountains COM interfaces are in the namespace mountainsLib
using namespace mountainsLib;

class CMountainsStatisticalAddonsCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMountainsStatisticalAddonsCtrl)

// Constructor
public:
	CMountainsStatisticalAddonsCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMountainsStatisticalAddonsCtrl();

	BEGIN_OLEFACTORY(CMountainsStatisticalAddonsCtrl)        // Class factory and guid
		virtual BOOL VerifyUserLicense();
		virtual BOOL GetLicenseKey(DWORD, BSTR *);
	END_OLEFACTORY(CMountainsStatisticalAddonsCtrl)

	DECLARE_OLETYPELIB(CMountainsStatisticalAddonsCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMountainsStatisticalAddonsCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMountainsStatisticalAddonsCtrl)		// Type name and misc status

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

