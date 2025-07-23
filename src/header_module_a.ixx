module;

#include "header_module_a_config.h"

#if !HEADER_MODULE_A_USE_STD_MODULE
#  include <format>
#  include <string>
#endif // !HEADER_MODULE_A_USE_STD_MODULE

export module header_module_a;

#if HEADER_MODULE_A_USE_STD_MODULE
import std;
#endif // HEADER_MODULE_A_USE_STD_MODULE

#if HEADER_MODULE_A_USE_MODULE
#  include "header_module_a.hpp"
#endif // HEADER_MODULE_A_USE_MODULE
