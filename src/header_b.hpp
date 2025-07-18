#include <string>
#include "header_a.hpp"
#include "static_a.h"

// hpp可以導入模塊
import module_a;

namespace header_b
{
    inline std::string get_info()
    {
        header_a::get_info();
        static_a::get_info();
        module_a::get_info();
        return "header_b";
    }
}
