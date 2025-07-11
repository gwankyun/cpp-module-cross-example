#pragma once
#include "dbg_decl.hpp"

#if HAS_STD_MODULE
import std;
#else
#  include <print>
#  include <string>
#endif // HAS_STD_MODULE

DBG_MODULE_EXPORT namespace detail
{
    template <typename T>
    DBG_MODULE_INLINE void dbg(const T& _value, std::string _message)
    {
        std::println("{} -> {}", _message, _value);
    }
} // namespace detail
