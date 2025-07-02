module;

#define USE_MODULE 0

#if !USE_MODULE
#  include "static_lib.h"
#endif

export module main;
import std;

#if USE_MODULE
import header_only;
#endif

export int main(int _argc, char* _argv[])
{
    std::println("module");
    std::println("header_only: {}", header_only::get_info());
    //header_only::check();
    return 0;
}
