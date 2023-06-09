#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
<<<<<<< HEAD
* _strdup(char *str) - returns a pointer to a newly allocated space in memory
* @str: string to duplicate
* @pointer_to_duplicate: pointer to duplicate 
* Returns (pointer_to_duplicate) on success
*/
=======
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: (Pointer_to_duplicate) string, or NULL if allocation fails.
 */
>>>>>>> 039b4a513d822811a5f50866bff758351822feec
char *_strdup(char *str)
{
char *pointer_to_duplicate;
int length = 0;
int i = 0;

if (str == NULL)
return (NULL);
while (isalpha(str[i]) != 0 && str[length] != '\0')
{
length++;
}
pointer_to_duplicate = malloc(sizeof(char) * length + 1);
if (pointer_to_duplicate == NULL)
return (NULL);
else
do {
pointer_to_duplicate[i] = str[i];
i++;
} while (i < length);
return (pointer_to_duplicate);
}
