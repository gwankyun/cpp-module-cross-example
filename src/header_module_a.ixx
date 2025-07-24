module;

#include "header_module_a_config.h"

#if !HEADER_MODULE_A_USE_STD_MODULE
//#  include <format>
#  include <string>
#endif // !HEADER_MODULE_A_USE_STD_MODULE

export module header_module_a;

#if HEADER_MODULE_A_USE_STD_MODULE
import std;
#endif // HEADER_MODULE_A_USE_STD_MODULE

#ifndef HEADER_MODULE_A_MODULE_EXPORT
#  define HEADER_MODULE_A_MODULE_EXPORT export
#endif // !HEADER_MODULE_A_MODULE_EXPORT

#ifndef HEADER_MODULE_A_MODULE_INLINE
#  define HEADER_MODULE_A_MODULE_INLINE
#endif // !HEADER_MODULE_A_MODULE_INLINE

#if HEADER_MODULE_A_USE_MODULE
#  include "header_module_a.hpp"
#endif // HEADER_MODULE_A_USE_MODULE
