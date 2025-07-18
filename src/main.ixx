module;

//#define HAS_CPP_MODULES 1
//
//#if !HAS_CPP_MODULES
//#  include "header_only.hpp"
//#endif

#ifndef HEADER_MODULE_A_USE_MODULE
#  define HEADER_MODULE_A_USE_MODULE 0
#endif // !HEADER_MODULE_A_USE_MODULE

#ifndef HEADER_MODULE_A_USE_STD_MODULE
#  if HEADER_MODULE_A_USE_MODULE
#    define HEADER_MODULE_A_USE_STD_MODULE 1
#  endif // HEADER_MODULE_A_USE_MODULE
#endif   // !HEADER_MODULE_A_USE_STD_MODULE

#include "header_a.hpp"
#include "header_b.hpp"
#include "static_a.h"
#include "static_b.h"

#if !HEADER_MODULE_A_USE_MODULE
#  include "header_module_a.hpp"
#  pragma message("HEADER_MODULE_A_USE_MODULE: false")
#endif // !HEADER_MODULE_A_USE_MODULE

export module main;
import std;
import module_a;
import module_b;

#if HEADER_MODULE_A_USE_MODULE
import header_module_a;
#  pragma message("HEADER_MODULE_A_USE_MODULE: true")
#endif // HEADER_MODULE_A_USE_MODULE

//#if HAS_CPP_MODULES
//import header_only;
//#endif

export int main(int _argc, char* _argv[])
{
    std::println("_argc: {}", _argc);
    std::println("module");
    //std::println("header_only: {}", header_only::get_info());
    //// header_only::check();
    //header_only::add(1, 2);
    //subtract(2, 1);

    header_a::get_info();
    static_a::get_info();
    module_a::get_info();

    header_b::get_info();
    static_b::get_info();
    module_b::get_info();

    header_module_a::get_info();
    return 0;
}
