module;
#include "dbg_decl.hpp"

export module dbg;

#ifdef DBG_MODULE_EXPORT
#  undef DBG_MODULE_EXPORT
#  define DBG_MODULE_EXPORT export
#endif // DBG_MODULE_EXPORT

#ifdef DBG_MODULE_INLINE
#  undef DBG_MODULE_INLINE
#  define DBG_MODULE_INLINE
#endif // DBG_MODULE_INLINE

#include "dbg.hpp"
