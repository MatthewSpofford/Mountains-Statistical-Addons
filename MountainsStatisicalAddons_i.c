

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MountainsStatisicalAddonsLib,0x647044bd,0xdec7,0x4ec2,0xb7,0x86,0x78,0x71,0xa1,0xf6,0xd6,0x31);


MIDL_DEFINE_GUID(IID, DIID__DMountainsStatisicalAddons,0xc8d88fe4,0x1860,0x4add,0x88,0xdc,0x39,0x3a,0x78,0x67,0x77,0x22);


MIDL_DEFINE_GUID(IID, DIID__DMountainsStatisicalAddonsEvents,0x0a210d0d,0x2836,0x499f,0xb9,0x1a,0x3c,0xc8,0xe6,0x0b,0x35,0xe0);


MIDL_DEFINE_GUID(CLSID, CLSID_MountainsStatisicalAddons,0x1b777728,0xf285,0x4da8,0x81,0xaf,0x07,0x77,0xf9,0x7b,0x6d,0x51);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



