#if defined(__has_attribute) && __has_attribute(noreturn)
#define __NO_RETURN __attribute__((__noreturn__))
#elif defined(__cplusplus) && __cplusplus >= 201103L
#define __NO_RETURN [[noreturn]]
#elif defined(__GNUC__) || defined(__clang__)
#define __NO_RETURN _Noreturn
#else
#define __NO_RETURN _Pragma("object_attribute=__noreturn")
#endif
