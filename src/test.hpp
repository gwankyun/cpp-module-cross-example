#pragma once
#include <iostream>
#include <string>
#include <print>
#include <source_location>

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

    template <typename T>
    inline void dbg(
        const T& _value, std::string _message, std::source_location _location = std::source_location::current()
    )
    {
        std::println("[{}:{}] {} -> {}", _location.function_name(), _location.line(), _message, _value);
    }
} // namespace detail

#ifndef TEST
#  define TEST(_express) detail::test(_express, TO_STRING(_express))
#endif // !TEST

#ifndef DBG
#  define DBG(_value) detail::dbg(_value, TO_STRING(_value), std::source_location::current())
#endif // !DBG
