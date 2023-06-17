#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pointer_to_new, *new_pointer;
char d = ' ';
char *h = &d;
unsigned int i = 0;
new_pointer = malloc(n + 1);
if (new_pointer == NULL)
return (NULL);
pointer_to_new = malloc((sizeof(s1) + n) + 1);
if (pointer_to_new == NULL)
return (NULL);
if (s1 == NULL)
pointer_to_new = strcpy(pointer_to_new, h);
else
pointer_to_new = strcpy(pointer_to_new, s1);
if (n >= strlen(s2))
{
if (s2 == NULL)
strcat(pointer_to_new, h);
else
strcat(pointer_to_new, s2);
}
else
{
while (i < n)
{
new_pointer[i] = s2[i];
i++;
}
strcat(pointer_to_new, new_pointer);
}
return (pointer_to_new);
}
