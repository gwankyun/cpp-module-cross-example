module;

#ifndef MODULE
#  define MODULE 1
#endif // !MODULE

#include "header_only_decl.hpp"

export module header_only;
import dbg;
#include "header_only.hpp"
