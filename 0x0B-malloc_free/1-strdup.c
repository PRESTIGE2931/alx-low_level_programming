#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* *_strdup(char *str) - returns a pointer to a newly allocated space in memory
* @str: string to duplicate
*
* Returns (pointer_to_duplicate) on success
*/
char *_strdup(char *str)
{
char *pointer_to_duplicate;
int length = 0;
int new;
int i = 0;

if (str == NULL)
return (NULL);
while (isalpha(str[i]) != 0 && str[length] != '\0')
{
length++;
}
pointer_to_duplicate = malloc(sizeof(char) * (length));
if (pointer_to_duplicate == NULL)
return (NULL);
else
do
{
pointer_to_duplicate[i] = str[i];
i++;
} while (i < length);
return (pointer_to_duplicate);
}