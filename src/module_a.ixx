module;
//#include <string>

export module module_a;
import std;

export namespace module_a
{
    inline std::string get_info()
    {
        return "module_a";
    }
}
