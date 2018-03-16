#ifndef LIBLINUX_SYSTEM_CALLS_WRITE_H
#define LIBLINUX_SYSTEM_CALLS_WRITE_H

#include <liblinux/types.h>

long write(unsigned int file_descriptor, char * buffer, size_t count);

#endif /* LIBLINUX_SYSTEM_CALLS_WRITE_H */