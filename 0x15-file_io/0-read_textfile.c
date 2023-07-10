#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t openFile, readFile, writeFile;
signed int count;

if(filename == NULL)
return (0);
openFile = open(filename, O_RDWR);
if(openFile == -1)
return (0);
buffer = malloc(sizeof((char) *buffer));
if(buffer == NULL)
return (0);
count = sizeof((char) *buffer);
readFile = read(openFile, buffer, letters);
writeFile = write(STDOUT_FILENO, buffer, readFile);
if(writeFile < count)
return (0);
return (writeFile);
}