module;

#ifndef MODULE_ENABLE
#  define MODULE_ENABLE 1
#endif // !MODULE_ENABLE

#include "header_only_decl.hpp"

export module header_only;
#include "header_only.hpp"
