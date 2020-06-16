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

public:
	CMountainsStatisticalAddonsCtrl();
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual DWORD GetControlFlags();
	virtual void OnResetState();

protected:
	~CMountainsStatisticalAddonsCtrl();

	// local structure to store the local parameters
	struct TParam
	{
		CString name;
		double  value;
		CString unit;
	};

	// input surface studiable displayed in the control
	IMatrixStudiablePtr studiables;

	// interface used to notify Mountains with the results calculated by the reserve
	IAddonParameterHandlerPtr paramHandler;

	// interface used to access to Mountains functionalities
	IMountainsPtr mountains;

	// generated bitmap of the surface displayed
	CBitmap matrixRendering;

	// local array of the parameters calculated
	CArray<TParam> paramArray;

	// 0: metric system
	// 1: inch system
	short unitSystem;

	// Diagnostic system
	ISpyToolsPtr spy;

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
	afx_msg void OnInit(IDispatch* dispMountains, IDispatch* studiables, IDispatch* parameterHandler);
	afx_msg void OnButtonClick(LPCTSTR id, BOOL checked, BOOL* modified);
	afx_msg void OnUpdateButton(LPCTSTR id, BOOL* enable, BOOL* checked, BOOL* activeOnMultiSelection);
	afx_msg SHORT GetUnitSystem();
	afx_msg void SetUnitSystem(SHORT value);

	virtual void Serialize(CArchive& ar);

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};
};

