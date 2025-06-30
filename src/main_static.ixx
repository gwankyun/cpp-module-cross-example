module;

#define MODULE_ENABLE 0

#if !MODULE_ENABLE
#  include "static_lib.h"
#endif

export module main;
import std;

#if MODULE_ENABLE
import header_only;
#endif

export int main(int _argc, char* _argv[])
{
    std::println("module");
    std::println("header_only: {}", static_lib::get_info());
    static_lib::check();
    return 0;
}
