module;
#include "header_a.hpp"
#include "static_a.h"

export module module_b;
import std;
import module_a;

export namespace module_b
{
    inline std::string get_info()
    {
        header_a::get_info();
        static_a::get_info();
        module_a::get_info();
        return "module_b";
    }
}
