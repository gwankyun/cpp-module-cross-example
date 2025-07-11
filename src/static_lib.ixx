module;

#ifndef HAS_CPP_MODULES
#  define HAS_CPP_MODULES 1
#endif // !HAS_CPP_MODULES

#include "header_only_decl.hpp"
#include "dbg_decl.hpp"

export module header_only;
#if DBG_MODULE_ENABLE
import dbg;
#endif
#include "header_only.hpp"
