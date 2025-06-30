#pragma once
#include <string>

namespace static_lib
{
    void check();

    std::string get_info();
} // namespace static_lib

#define MODULE_ENABLE 0
#define MODULE_INLINE
