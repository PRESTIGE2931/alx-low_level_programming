#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *pointer_to;
int i, length;
if (min > max)
return (NULL);
length = max - min + 1;
pointer_to = malloc(sizeof(int) * length);
if (pointer_to == NULL)
return (NULL);
for (i = 0; min <= max; i++)
pointer_to[i] = min++;
return (pointer_to);
}
