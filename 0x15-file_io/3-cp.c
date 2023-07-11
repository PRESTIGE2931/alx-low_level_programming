#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @agrv: a pointer to an array of arguments
 * Return: (0) Success
*/
int main(int argc, char const *argv[])
{
char *buff;
int openFile, openFile2, copyFile, pasteFile;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit (97);
}
buff = malloc(sizeof(char) * 1024);
openFile = open(argv[1], O_RDONLY);
copyFile = read(openFile, buff, 1024);
if (openFile == -1 | copyFile == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit (98);
}
openFile2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
pasteFile = write(openFile2, buff, openFile);
if(openFile2 == -1 | copyFile == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
exit (98);
}
free(buff);
close_f(openFile);
close_f(openFile2);
return (0);
}

/**
 * close_f - closes the specified file descriptor
 * @fd: the number of the file descriptor
 * 
 * Return: void
*/
void close_f(int fd)
{
int c;
c = close(fd);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
