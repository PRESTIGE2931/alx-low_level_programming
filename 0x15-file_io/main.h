#ifndef HEADER_FILE
#define HEADER_FILE
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*HEADER_FILE*/