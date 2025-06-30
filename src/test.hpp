#pragma once
#include <iostream>
#include <string>

#ifndef TO_STRING_IMPL
#  define TO_STRING_IMPL(x) #x
#endif // !TO_STRING_IMPL

#ifndef TO_STRING
#  define TO_STRING(x) TO_STRING_IMPL(x)
#endif // !TO_STRING

namespace detail
{
    inline void test(bool _expression, std::string _message)
    {
        if (_expression)
        {
            std::cout << _message << ": passed" << std::endl;
        }
        else
        {
            std::cout << _message << ": failed" << std::endl;
        }
    }
} // namespace detail

#ifndef TEST
#  define TEST(_express) detail::test(_express, TO_STRING(_express))
#endif // !TEST
