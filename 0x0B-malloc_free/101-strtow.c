#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of 
 * alpha_cluster in a string
 * @s: string to evaluate
 *
 * Return: number of alpha_cluster
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into alpha_cluster
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **pointer_to_array, *temp;
	int i, k = 0, length = 0, alpha_cluster, c = 0, start, end;

	while (*(str + length))
		length++;
	alpha_cluster = count_word(str);
	if (alpha_cluster == 0)
		return (NULL);

	pointer_to_array = (char **) malloc(sizeof(char *) * (alpha_cluster + 1));
	if (pointer_to_array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				pointer_to_array[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	pointer_to_array[k] = NULL;
	return (pointer_to_array);
}
