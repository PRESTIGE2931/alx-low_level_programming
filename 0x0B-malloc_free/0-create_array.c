#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
* @pointer: the address of memory created
* @size: the size of the memory to print
*
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *pointer_to_array;
if (size == 0)
return (NULL);
pointer_to_array = malloc(sizeof(char) * size);
if (pointer_to_array == NULL;
return (NULL);
while (i < size)
{
pointer_to_array[i] = c;
i++;
}
return (pointer_to_array);
}
