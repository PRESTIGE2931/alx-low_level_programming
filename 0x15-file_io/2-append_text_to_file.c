#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int openFile, writeFile, count = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (count = 0; text_content[count];)
count++;
}
openFile = open(filename, O_WRONLY | O_APPEND);
writeFile = write(openFile, text_content, count);
if (openFile == -1 || writeFile == -1)
return (-1);
close(openFile);
return (1);
}