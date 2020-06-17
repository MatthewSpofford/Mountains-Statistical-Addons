#pragma once

#include "../pch.h"

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


    // local array of the parameters calculated
    CArray<TParam> paramArray;

    // 0: metric system
    // 1: inch system
    short unitSystem = 1;

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

};

