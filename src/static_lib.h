#pragma once
#include <string>

#define MODULE_ENABLE 0
#define MODULE_INLINE
#include "config.hpp"

MODULE_EXPORT namespace header_only
{
    MODULE_INLINE std::string get_info();

    MODULE_INLINE int add(int _a, int _b);
} // namespace header_only
