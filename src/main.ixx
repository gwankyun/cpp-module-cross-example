module;

#define HAS_CPP_MODULES 1

#if !HAS_CPP_MODULES
#  include "header_only.hpp"
#endif

export module main;
import std;

#if HAS_CPP_MODULES
import header_only;
#endif

export int main(int _argc, char* _argv[])
{
    std::println("_argc: {}", _argc);
    std::println("module");
    std::println("header_only: {}", header_only::get_info());
    //header_only::check();
    header_only::add(1, 2);
    subtract(2, 1);
    return 0;
}
