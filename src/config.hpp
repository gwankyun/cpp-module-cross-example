#pragma once

#ifndef HAS_CPP_MODULES
#  if defined(__cpp_modules)
#    define HAS_CPP_MODULES 1
#  else
#    define HAS_CPP_MODULES 0
#  endif
#endif // !HAS_CPP_MODULES

#ifndef HAS_STD_MODULE
#  if HAS_CPP_MODULES && defined(__cpp_lib_modules) && __cpp_lib_modules >= 202207L
#    define HAS_STD_MODULE 1
#  else
#    define HAS_STD_MODULE 0
#  endif
#endif // !HAS_STD_MODULE

//#ifndef USE_MODULE
//#  if HAS_CPP_MODULES
//#    define USE_MODULE 1
//#  else
//#    define USE_MODULE 0
//#  endif // HAS_CPP_MODULES
//#endif   // !USE_MODULE

//#ifndef MODULE_EXPORT
//#  if USE_MODULE
//#    define MODULE_EXPORT export
//#  else
//#    define MODULE_EXPORT
//#  endif
//#endif // !MODULE_EXPORT
//
//#ifndef MODULE_INLINE
//#  if USE_MODULE
//#    define MODULE_INLINE
//#  else
//#    define MODULE_INLINE inline
//#  endif
//#endif // !MODULE_INLINE
//
//#ifndef MODULE_EXPORT_BEGIN
//#  if USE_MODULE
//#    define MODULE_EXPORT_BEGIN \
//        export \
//        {
//#  else
//#    define MODULE_EXPORT_BEGIN
//#  endif // HAS_CPP_MODULES
//#endif   // !MODULE_EXPORT_BEGIN
//
//#ifndef MODULE_EXPORT_END
//#  if USE_MODULE
//#    define MODULE_EXPORT_END }
//#  else
//#    define MODULE_EXPORT_END
//#  endif
//#endif // !MODULE_EXPORT_END

// ×Óºêé_êP
// #ifndef MODULE_DBG
// #  define MODULE_DBG 1
// #endif // !MODULE_DBG

// #ifndef DBG_MODULE_ENABLE
// #  define DBG_MODULE_ENABLE 0
// #endif // !DBG_MODULE_ENABLE
