module;
#define DBG_MODULE_STD 1
#include "dbg_decl.hpp"

export module dbg;

#ifdef DBG_MODULE_EXPORT
#  undef DBG_MODULE_EXPORT
#endif // DBG_MODULE_EXPORT
#define DBG_MODULE_EXPORT export

#ifdef HAS_STD_MODULE
#  undef HAS_STD_MODULE
#endif // HAS_STD_MODULE
#define HAS_STD_MODULE 1

#include "dbg.hpp"
