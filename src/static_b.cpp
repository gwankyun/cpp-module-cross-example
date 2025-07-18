#include "static_b.h"
#include "static_a.h"
#include "header_a.hpp"

import module_a;

namespace static_b
{
    std::string get_info()
    {
        header_a::get_info();
        static_a::get_info();
        module_a::get_info();
        return "static_b";
    }
}
