/* (c) Copyright, Real-Time Innovations, Inc. 2003-2009. All rights reserved. */
/*
 * @(#)commend_dll.h    generated by: makeheader    Sat Nov 23 02:38:39 2013
 *
 *		built from:	dll.ifc
 */

#ifndef commend_dll_h
#define commend_dll_h



#if defined(RTI_WIN32) || defined(RTI_WINCE)
  #if defined(RTI_mig_DLL_EXPORT)
    #define COMMENDDllExport __declspec( dllexport )
  #else
    #define COMMENDDllExport
  #endif /* RTI_mig_DLL_EXPORT */

  #if defined(RTI_mig_DLL_VARIABLE) 
    #if defined(RTI_mig_DLL_EXPORT)
      #define COMMENDDllVariable __declspec( dllexport )
    #else
      #define COMMENDDllVariable __declspec( dllimport )
    #endif /* RTI_mig_DLL_EXPORT */
  #else 
    #define COMMENDDllVariable
  #endif /* RTI_mig_DLL_VARIABLE */
#else
  #define COMMENDDllExport
  #define COMMENDDllVariable
#endif /* RTI_WIN32 || RTI_WINCE */


#endif /* commend_dll_h */
