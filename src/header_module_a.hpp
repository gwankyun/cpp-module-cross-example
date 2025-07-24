#pragma once

#ifndef HEADER_MODULE_A_USE_MODULE
#  define HEADER_MODULE_A_USE_MODULE 0
#endif // !HEADER_MODULE_A_USE_MODULE

#ifndef HEADER_MODULE_A_USE_STD_MODULE
#  define HEADER_MODULE_A_USE_STD_MODULE 0
#endif // !HEADER_MODULE_A_USE_STD_MODULE

//#if HEADER_MODULE_A_USE_MODULE
//#  include "module_define_true.hpp"
//#else
//#  include "module_define_false.hpp"
//#endif // HEADER_MODULE_A_USE_MODULE

#if !HEADER_MODULE_A_USE_MODULE
#  if HEADER_MODULE_A_USE_STD_MODULE
import std;
#  else
//#    include <format>
#    include <string>
#  endif // HEADER_MODULE_A_USE_STD_MODULE
#endif   // !HEADER_MODULE_A_USE_MODULE

#ifndef HEADER_MODULE_A_MODULE_EXPORT
#  define HEADER_MODULE_A_MODULE_EXPORT
#endif // !HEADER_MODULE_A_MODULE_EXPORT

#ifndef HEADER_MODULE_A_MODULE_INLINE
#  define HEADER_MODULE_A_MODULE_INLINE inline
#endif // !HEADER_MODULE_A_MODULE_INLINE

HEADER_MODULE_A_MODULE_EXPORT namespace header_module_a
{
    HEADER_MODULE_A_MODULE_INLINE std::string get_info()
    {
        auto use_module = HEADER_MODULE_A_USE_MODULE;
        auto use_std_module = HEADER_MODULE_A_USE_STD_MODULE;
        return std::string("header_module_a: ") + std::to_string(use_module) + " " + std::to_string(use_std_module);
    }
}

//#include "module_undef.hpp"
