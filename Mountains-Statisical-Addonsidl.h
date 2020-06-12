

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for MountainsStatisicalAddons.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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


#ifndef __Mountains2DStatisical2DAddonsidl_h__
#define __Mountains2DStatisical2DAddonsidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMountainsStatisicalAddons_FWD_DEFINED__
#define ___DMountainsStatisicalAddons_FWD_DEFINED__
typedef interface _DMountainsStatisicalAddons _DMountainsStatisicalAddons;

#endif 	/* ___DMountainsStatisicalAddons_FWD_DEFINED__ */


#ifndef ___DMountainsStatisicalAddonsEvents_FWD_DEFINED__
#define ___DMountainsStatisicalAddonsEvents_FWD_DEFINED__
typedef interface _DMountainsStatisicalAddonsEvents _DMountainsStatisicalAddonsEvents;

#endif 	/* ___DMountainsStatisicalAddonsEvents_FWD_DEFINED__ */


#ifndef __MountainsStatisicalAddons_FWD_DEFINED__
#define __MountainsStatisicalAddons_FWD_DEFINED__

#ifdef __cplusplus
typedef class MountainsStatisicalAddons MountainsStatisicalAddons;
#else
typedef struct MountainsStatisicalAddons MountainsStatisicalAddons;
#endif /* __cplusplus */

#endif 	/* __MountainsStatisicalAddons_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MountainsStatisicalAddons_0000_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_MountainsStatisicalAddons_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MountainsStatisicalAddons_0000_0000_v0_0_s_ifspec;


#ifndef __MountainsStatisicalAddonsLib_LIBRARY_DEFINED__
#define __MountainsStatisicalAddonsLib_LIBRARY_DEFINED__

/* library MountainsStatisicalAddonsLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_MountainsStatisicalAddonsLib;

#ifndef ___DMountainsStatisicalAddons_DISPINTERFACE_DEFINED__
#define ___DMountainsStatisicalAddons_DISPINTERFACE_DEFINED__

/* dispinterface _DMountainsStatisicalAddons */
/* [uuid] */ 


EXTERN_C const IID DIID__DMountainsStatisicalAddons;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("c8d88fe4-1860-4add-88dc-393a78677722")
    _DMountainsStatisicalAddons : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMountainsStatisicalAddonsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMountainsStatisicalAddons * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMountainsStatisicalAddons * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMountainsStatisicalAddons * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMountainsStatisicalAddons * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMountainsStatisicalAddons * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMountainsStatisicalAddons * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMountainsStatisicalAddons * This,
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
    } _DMountainsStatisicalAddonsVtbl;

    interface _DMountainsStatisicalAddons
    {
        CONST_VTBL struct _DMountainsStatisicalAddonsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMountainsStatisicalAddons_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMountainsStatisicalAddons_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMountainsStatisicalAddons_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMountainsStatisicalAddons_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMountainsStatisicalAddons_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMountainsStatisicalAddons_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMountainsStatisicalAddons_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMountainsStatisicalAddons_DISPINTERFACE_DEFINED__ */


#ifndef ___DMountainsStatisicalAddonsEvents_DISPINTERFACE_DEFINED__
#define ___DMountainsStatisicalAddonsEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DMountainsStatisicalAddonsEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DMountainsStatisicalAddonsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0a210d0d-2836-499f-b91a-3cc8e60b35e0")
    _DMountainsStatisicalAddonsEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMountainsStatisicalAddonsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMountainsStatisicalAddonsEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMountainsStatisicalAddonsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMountainsStatisicalAddonsEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMountainsStatisicalAddonsEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMountainsStatisicalAddonsEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMountainsStatisicalAddonsEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMountainsStatisicalAddonsEvents * This,
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
    } _DMountainsStatisicalAddonsEventsVtbl;

    interface _DMountainsStatisicalAddonsEvents
    {
        CONST_VTBL struct _DMountainsStatisicalAddonsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMountainsStatisicalAddonsEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMountainsStatisicalAddonsEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMountainsStatisicalAddonsEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMountainsStatisicalAddonsEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMountainsStatisicalAddonsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMountainsStatisicalAddonsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMountainsStatisicalAddonsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMountainsStatisicalAddonsEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MountainsStatisicalAddons;

#ifdef __cplusplus

class DECLSPEC_UUID("1b777728-f285-4da8-81af-0777f97b6d51")
MountainsStatisicalAddons;
#endif
#endif /* __MountainsStatisicalAddonsLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


