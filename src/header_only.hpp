#pragma once

#include "header_only_decl.hpp"

#if MODULE_STD
import std;
#endif

#if MODULE_DBG_ENABLE
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
