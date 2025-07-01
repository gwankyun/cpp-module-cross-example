#pragma once
#include <string>

#define MODULE_ENABLE 0
#define MODULE_INLINE
#include "config.hpp"

MODULE_EXPORT namespace header_only
{
    MODULE_INLINE void check();
    //{
    //    std::vector<int> vec;
    //    TEST(vec.empty());
    //    vec.push_back(1);
    //    TEST(vec.size() == 1);
    //}

    MODULE_INLINE std::string get_info();
    //{
    //    return "header_only";
    //}

    MODULE_INLINE int add(int _a, int _b);
    //{
    //    DBG(_a);
    //    DBG(_b);
    //    return _a + _b;
    //}
} // namespace header_only
