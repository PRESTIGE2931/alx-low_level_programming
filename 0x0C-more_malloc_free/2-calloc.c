#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer_to_array;
if (nmemb == 0 || size == 0)
return (NULL);
pointer_to_array = malloc(size * nmemb);
if (pointer_to_array == NULL)
return (NULL);
_set(pointer_to_array, 0, nmemb * size);
return (pointer_to_array);
}

/**
 * *_set - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_set(char *array, char val, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
array[i] = val;
}
return (array);
}
