#pragma once

#include "header_module_a_config.h"

#if !HEADER_MODULE_A_USE_MODULE
#  if HEADER_MODULE_A_USE_STD_MODULE
import std;
#  else
#    include <string>
#  endif // HEADER_MODULE_A_USE_STD_MODULE
#endif   // !HEADER_MODULE_A_USE_MODULE

MODULE_EXPORT namespace header_module_a
{
    MODULE_INLINE std::string get_info()
    {
#if HEADER_MODULE_A_USE_MODULE
        return "header_module_a: module";
#else
        return "header_module_a: header";
#endif // HEADER_MODULE_A_USE_MODULE
    }
}
