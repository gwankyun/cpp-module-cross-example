#pragma once
#include "dbg_decl.hpp"

#if DBG_MODULE_STD
import std;
#endif

DBG_MODULE_EXPORT namespace detail
{
    template <typename T>
    DBG_MODULE_INLINE void dbg(const T& _value, std::string _message)
    {
        std::println("{} -> {}", _message, _value);
    }
} // namespace detail
