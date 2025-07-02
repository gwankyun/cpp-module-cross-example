#pragma once

#ifndef TO_STRING_IMPL
#  define TO_STRING_IMPL(x) #x
#endif // !TO_STRING_IMPL

#ifndef TO_STRING
#  define TO_STRING(x) TO_STRING_IMPL(x)
#endif // !TO_STRING

#ifndef DBG
#  define DBG(_value) detail::dbg(_value, TO_STRING(_value))
#endif // !DBG
