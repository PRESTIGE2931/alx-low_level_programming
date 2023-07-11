#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file and write to it
 *
 * Return: (1) Success
 */
int create_file(const char *filename, char *text_content)
{
signed int openFile, writeFile, count = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content != '\0')
{
count++;
}
}
openFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
writeFile = write(openFile, text_content, count);
if (openFile == -1 | writeFile == -1)
return (-1);
close(openFile);
return (1);
}