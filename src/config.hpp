#pragma once

#ifndef MODULE_ENABLE
#  define MODULE_ENABLE 1
#endif // !MODULE_ENABLE

#ifndef MODULE_EXPORT
#  if MODULE_ENABLE
#    define MODULE_EXPORT export
#  else
#    define MODULE_EXPORT
#  endif
#endif // !MODULE_EXPORT

#ifndef MODULE_INLINE
#  if MODULE_ENABLE
#    define MODULE_INLINE
#  else
#    define MODULE_INLINE inline
#  endif
#endif // !MODULE_INLINE

