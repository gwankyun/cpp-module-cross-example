module;

#define HEADER_MODULE_A_USE_MODULE 1

#include "header_module_a_config.h"

#if !HEADER_MODULE_A_USE_STD_MODULE
#  include <string>
#endif // !HEADER_MODULE_A_USE_STD_MODULE

export module header_module_a;

#if HEADER_MODULE_A_USE_STD_MODULE
import std;
#endif // HEADER_MODULE_A_USE_STD_MODULE

#include "header_module_a.hpp"
