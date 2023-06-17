#include <stdio.h>
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
    int *pointer_to_array;
    unsigned int length = 0, i;

    if (min > max)
        return (NULL);
    else
        length = max - min;    
    pointer_to_array = malloc(sizeof(int) * length + 1);
    if (pointer_to_array == NULL)
        return (NULL);
   for (i = 0; min <= max; i++)
   {
        pointer_to_array[i] = min;
        min++;
   }
    return (pointer_to_array);
}