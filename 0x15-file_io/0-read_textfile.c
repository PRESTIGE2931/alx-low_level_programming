#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - opens, a file, reads it, and writes it
 * @filename: a pointer to the file name string
 * @letters: number to chars to be read
 *
 * Return: the amount of chars actually read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t O, R, W;
char *buffer;

if (letters <= 0)
return (0);
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
O = open(filename, O_RDONLY);
R = read(O, buffer, letters);
W = write(STDOUT_FILENO, buffer, R);
if (O == -1 || R == -1 || W == -1 || W != R)
{
free(buffer);
return (0);
}
free(buffer);
close(O);
return (W);
}