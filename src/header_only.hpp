#pragma once

#include "header_only_decl.hpp"

#if MODULE_ENABLE
import std;
#endif

MODULE_EXPORT namespace header_only
{
    MODULE_INLINE void check()
    {
        std::vector<int> vec;
        TEST(vec.empty());
        vec.push_back(1);
        TEST(vec.size() == 1);
    }

    MODULE_INLINE std::string get_info()
    {

        return "header_only";
    }
} // namespace header_only
