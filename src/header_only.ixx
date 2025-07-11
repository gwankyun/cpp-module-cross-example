module;
#define HAS_STD_MODULE 1
#include "header_only_decl.hpp"

export module header_only;

#ifdef MODULE_EXPORT
#  undef MODULE_EXPORT
#endif // MODULE_EXPORT
#define MODULE_EXPORT export

#ifdef MODULE_EXPORT_BEGIN
#  undef MODULE_EXPORT_BEGIN
#endif // MODULE_EXPORT_BEGIN
#define MODULE_EXPORT_BEGIN \
    export \
    {

#ifdef MODULE_EXPORT_END
#  undef MODULE_EXPORT_END
#endif // MODULE_EXPORT_END
#define MODULE_EXPORT_END }

#if HAS_STD_MODULE
import std;
#endif

#include "header_only.hpp"
