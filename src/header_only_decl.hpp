#pragma once
#include "config.hpp"

#if !DBG_MODULE_ENABLE
#  include "dbg.hpp"
#endif // MODULE_DBG

// ÒýÈëºê
#include "dbg_macro.h"

#if !HAS_STD_MODULE
#  include <cassert>
#  include <string>
#  include <vector>
#endif
