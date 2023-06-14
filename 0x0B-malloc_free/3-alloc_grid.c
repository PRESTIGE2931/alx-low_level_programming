#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created pointer_to_array (Success)
 */
int **alloc_grid(int width, int height)
{
	int **pointer_to_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	pointer_to_array = (int **) malloc(sizeof(int *) * height);

	if (pointer_to_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pointer_to_array[i] = (int *) malloc(sizeof(int) * width);
		if (pointer_to_array[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pointer_to_array[i][j] = 0;
		}
	}
	return (pointer_to_array);
}