module;

#define MODULE_ENABLE 1

#if !MODULE_ENABLE
#  include "header_only.hpp"
#endif

export module main;
import std;

#if MODULE_ENABLE
import header_only;
#endif

export int main(int _argc, char* _argv[])
{
    std::println("_argc: {}", _argc);
    std::println("module");
    std::println("header_only: {}", header_only::get_info());
    header_only::check();
    header_only::add(1, 2);
    return 0;
}
