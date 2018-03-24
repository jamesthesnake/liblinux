#ifndef LIBLINUX_SYSTEM_CALLS_OPEN_H
#define LIBLINUX_SYSTEM_CALLS_OPEN_H

#include <liblinux/types.h>

int open(const char * path, int flags, mode_t mode);

#endif /* LIBLINUX_SYSTEM_CALLS_OPEN_H */
