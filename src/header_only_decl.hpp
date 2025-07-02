#pragma once
#include "config.hpp"

#if !MODULE_DBG_ENABLE
#  include "dbg.hpp"
#endif // MODULE_DBG_ENABLE

#include "dbg_macro.h"

#if !MODULE_STD
#  include <cassert>
#  include <string>
#  include <vector>
#endif
