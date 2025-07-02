#pragma once
#include "dbg_macro.h"
#include <print>
#include <string>

#ifndef DBG_MODULE_EXPORT
#  if MODULE_DBG_ENABLE
#    define DBG_MODULE_EXPORT export
#  else
#    define DBG_MODULE_EXPORT
#  endif
#endif // !DBG_MODULE_EXPORT

#ifndef DBG_MODULE_INLINE
#  if MODULE_DBG_ENABLE
#    define DBG_MODULE_INLINE
#  else
#    define DBG_MODULE_INLINE inline
#  endif
#endif // !DBG_MODULE_INLINE
