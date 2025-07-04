#pragma once

#ifndef MODULE
#  define MODULE 1
#endif // !MODULE

#ifndef MODULE_STD
#  if MODULE
#    define MODULE_STD 1
#  else
#    define MODULE_STD 0
#  endif
#endif // !MODULE_STD

#ifndef MODULE_EXPORT
#  if MODULE
#    define MODULE_EXPORT export
#  else
#    define MODULE_EXPORT
#  endif
#endif // !MODULE_EXPORT

#ifndef MODULE_INLINE
#  if MODULE
#    define MODULE_INLINE
#  else
#    define MODULE_INLINE inline
#  endif
#endif // !MODULE_INLINE

#ifndef MODULE_DBG_ENABLE
#  define MODULE_DBG_ENABLE 1
#endif // !MODULE_DBG_ENABLE
