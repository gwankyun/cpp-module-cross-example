#pragma once

#include "header_only_decl.hpp"



//#if HAS_STD_MODULE
//import std;
//#endif

#if MODULE_DBG
import dbg;
#endif

MODULE_EXPORT namespace header_only
{
    MODULE_INLINE std::string get_info()
    {
        return "header_only";
    }

    MODULE_INLINE int add(int _a, int _b)
    {
        DBG(_a);
        DBG(_b);
        return _a + _b;
    }
} // namespace header_only

MODULE_EXPORT_BEGIN
MODULE_INLINE int subtract(int _a, int _b)
{
    return _a - _b;
}
MODULE_EXPORT_END
