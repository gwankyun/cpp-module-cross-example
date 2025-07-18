#ifdef MODULE_EXPORT
#  undef MODULE_EXPORT
#endif // MODULE_EXPORT

#if USE_MODULE
#  define MODULE_EXPORT export
#else
#  define MODULE_EXPORT
#endif

#ifdef MODULE_INLINE
#  undef MODULE_INLINE
#endif // MODULE_INLINE

#if USE_MODULE
#  define MODULE_INLINE
#else
#  define MODULE_INLINE inline
#endif

#ifdef MODULE_EXPORT_BEGIN
#  undef MODULE_EXPORT_BEGIN
#endif // MODULE_EXPORT_BEGIN

#if USE_MODULE
#  define MODULE_EXPORT_BEGIN \
      export \
      {
#else
#  define MODULE_EXPORT_BEGIN
#endif // HAS_CPP_MODULES

#ifdef MODULE_EXPORT_END
#  undef MODULE_EXPORT_END
#endif // MODULE_EXPORT_END

#if USE_MODULE
#  define MODULE_EXPORT_END }
#else
#  define MODULE_EXPORT_END
#endif
