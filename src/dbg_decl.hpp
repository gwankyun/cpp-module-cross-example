#pragma once
#include "config.hpp"

// #ifndef DBG_MODULE
// #  if defined(__cpp_modules) && __cpp_modules >= 201907L
// #    define DBG_MODULE 1
// #  else
// #    define DBG_MODULE 0
// #  endif
// #endif // !DBG_MODULE
//
// #ifndef DBG_MODULE_STD
// #  if defined(__cpp_lib_modules) && __cpp_lib_modules >= 202207L
// #    define DBG_MODULE_STD 1
// #  else
// #    define DBG_MODULE_STD 0
// #  endif
// #endif // !DBG_MODULE_STD
//
// #ifndef DBG_MODULE_EXPORT
// #  if DBG_MODULE
// #    define DBG_MODULE_EXPORT export
// #  else
// #    define DBG_MODULE_EXPORT
// #  endif
// #endif // !DBG_MODULE_EXPORT
//
// #ifndef DBG_MODULE_INLINE
// #  if DBG_MODULE
// #    define DBG_MODULE_INLINE
// #  else
// #    define DBG_MODULE_INLINE inline
// #  endif
// #endif // !DBG_MODULE_INLINE
//
// #if !DBG_MODULE_STD
// #  include <print>
// #  include <string>
// #endif

// #ifndef DBG_USE_MODULE
// #  define DBG_USE_MODULE 1
// #endif // !DBG_USE_MODULE
//
// #ifndef DBG_MODULE_ENABLE
// #if HAS_CPP_MODULES &&
//
// #endif // HAS_CPP_MODULES &&
//
// #endif // !DBG_MODULE_ENABLE

#ifndef DBG_MODULE_ENABLE
#  define DBG_MODULE_ENABLE 1
#endif // !DBG_MODULE_ENABLE

#if !HAS_CPP_MODULES && DBG_MODULE_ENABLE
#  error "Can not DBG_MODULE_ENABLE"
#endif // !HAS_CPP_MODULES && DBG_MODULE_ENABLE

#ifndef DBG_MODULE_EXPORT
#  if DBG_MODULE_ENABLE
#    define DBG_MODULE_EXPORT export
#  else
#    define DBG_MODULE_EXPORT
#  endif // HAS_CPP_MODULES && DBG_USE_MODULE
#endif   // !DBG_MODULE_EXPORT

#ifndef DBG_MODULE_INLINE
#  if DBG_MODULE_ENABLE
#    define DBG_MODULE_INLINE
#  else
#    define DBG_MODULE_INLINE inline
#  endif // HAS_CPP_MODULES && DBG_USE_MODULE
#endif   // !DBG_MODULE_INLINE

//#if !HAS_STD_MODULE
//#  include <print>
//#  include <string>
//#endif // !HAS_STD_MODULE
