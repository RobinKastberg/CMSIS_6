#ifndef CMSIS_ICCARM_H
#define CMSIS_ICCARM_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__has_attribute) && __has_attribute(noreturn)
#define __NO_RETURN __attribute__((__noreturn__))
#else
#if defined(__cplusplus)
#define __NO_RETURN _Pragma("GCC diagnostic ignored ""-Wreturn-type"")
#else
#define __NO_RETURN
#endif
#endif

// All other lines in the cmsis_iccarm.h file remain unchanged...

#ifdef __cplusplus
}
#endif

#endif /* CMSIS_ICCARM_H */