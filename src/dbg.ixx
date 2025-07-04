module;
#define DBG_MODULE_STD 1
#include "dbg_decl.hpp"

export module dbg;

#ifdef DBG_MODULE_EXPORT
#  undef DBG_MODULE_EXPORT
#endif // DBG_MODULE_EXPORT
#define DBG_MODULE_EXPORT export

#include "dbg.hpp"
