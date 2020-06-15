

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for MountainsStatisticalAddons.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __Mountains2DStatistical2DAddonsidl_h__
#define __Mountains2DStatistical2DAddonsidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMOUNTAINSSTATISTICALADDONS_FWD_DEFINED__
#define ___DMOUNTAINSSTATISTICALADDONS_FWD_DEFINED__
typedef interface _DMOUNTAINSSTATISTICALADDONS _DMOUNTAINSSTATISTICALADDONS;

#endif 	/* ___DMOUNTAINSSTATISTICALADDONS_FWD_DEFINED__ */


#ifndef ___DMOUNTAINSSTATISTICALADDONSEvents_FWD_DEFINED__
#define ___DMOUNTAINSSTATISTICALADDONSEvents_FWD_DEFINED__
typedef interface _DMOUNTAINSSTATISTICALADDONSEvents _DMOUNTAINSSTATISTICALADDONSEvents;

#endif 	/* ___DMOUNTAINSSTATISTICALADDONSEvents_FWD_DEFINED__ */


#ifndef __MOUNTAINSSTATISTICALADDONS_FWD_DEFINED__
#define __MOUNTAINSSTATISTICALADDONS_FWD_DEFINED__

#ifdef __cplusplus
typedef class MOUNTAINSSTATISTICALADDONS MOUNTAINSSTATISTICALADDONS;
#else
typedef struct MOUNTAINSSTATISTICALADDONS MOUNTAINSSTATISTICALADDONS;
#endif /* __cplusplus */

#endif 	/* __MOUNTAINSSTATISTICALADDONS_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MountainsStatisticalAddons_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_MountainsStatisticalAddons_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MountainsStatisticalAddons_0000_0000_v0_0_s_ifspec;


#ifndef __MOUNTAINSSTATISTICALADDONSLib_LIBRARY_DEFINED__
#define __MOUNTAINSSTATISTICALADDONSLib_LIBRARY_DEFINED__

/* library MOUNTAINSSTATISTICALADDONSLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_MOUNTAINSSTATISTICALADDONSLib;

#ifndef ___DMOUNTAINSSTATISTICALADDONS_DISPINTERFACE_DEFINED__
#define ___DMOUNTAINSSTATISTICALADDONS_DISPINTERFACE_DEFINED__

/* dispinterface _DMOUNTAINSSTATISTICALADDONS */
/* [uuid] */ 


EXTERN_C const IID DIID__DMOUNTAINSSTATISTICALADDONS;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("c8d88fe4-1860-4add-88dc-393a78677722")
    _DMOUNTAINSSTATISTICALADDONS : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMOUNTAINSSTATISTICALADDONSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMOUNTAINSSTATISTICALADDONS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMOUNTAINSSTATISTICALADDONS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMOUNTAINSSTATISTICALADDONS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMOUNTAINSSTATISTICALADDONS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMOUNTAINSSTATISTICALADDONS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMOUNTAINSSTATISTICALADDONS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMOUNTAINSSTATISTICALADDONS * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMOUNTAINSSTATISTICALADDONSVtbl;

    interface _DMOUNTAINSSTATISTICALADDONS
    {
        CONST_VTBL struct _DMOUNTAINSSTATISTICALADDONSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMOUNTAINSSTATISTICALADDONS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMOUNTAINSSTATISTICALADDONS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMOUNTAINSSTATISTICALADDONS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMOUNTAINSSTATISTICALADDONS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMOUNTAINSSTATISTICALADDONS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMOUNTAINSSTATISTICALADDONS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMOUNTAINSSTATISTICALADDONS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMOUNTAINSSTATISTICALADDONS_DISPINTERFACE_DEFINED__ */


#ifndef ___DMOUNTAINSSTATISTICALADDONSEvents_DISPINTERFACE_DEFINED__
#define ___DMOUNTAINSSTATISTICALADDONSEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DMOUNTAINSSTATISTICALADDONSEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DMOUNTAINSSTATISTICALADDONSEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0a210d0d-2836-499f-b91a-3cc8e60b35e0")
    _DMOUNTAINSSTATISTICALADDONSEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMOUNTAINSSTATISTICALADDONSEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMOUNTAINSSTATISTICALADDONSEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMOUNTAINSSTATISTICALADDONSEventsVtbl;

    interface _DMOUNTAINSSTATISTICALADDONSEvents
    {
        CONST_VTBL struct _DMOUNTAINSSTATISTICALADDONSEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMOUNTAINSSTATISTICALADDONSEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMOUNTAINSSTATISTICALADDONSEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMOUNTAINSSTATISTICALADDONSEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMOUNTAINSSTATISTICALADDONSEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMOUNTAINSSTATISTICALADDONSEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMOUNTAINSSTATISTICALADDONSEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMOUNTAINSSTATISTICALADDONSEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMOUNTAINSSTATISTICALADDONSEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MOUNTAINSSTATISTICALADDONS;

#ifdef __cplusplus

class DECLSPEC_UUID("1b777728-f285-4da8-81af-0777f97b6d51")
MOUNTAINSSTATISTICALADDONS;
#endif
#endif /* __MOUNTAINSSTATISTICALADDONSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


