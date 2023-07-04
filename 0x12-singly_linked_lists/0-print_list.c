#include "lists.h"

/**
 * print_list - prints all the 
 * elements of a list_t list function
 * @h: pointer
 * Return: (count) number of nodes in the list
*/
size_t print_list(const list_t *h)
{
int i;
size_t count = 0;

const list_t *element = h;
for (i = 0; element; i++)
{
if (element->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", element->len, element->str);
element = element->next;
count++;
}
return (count);
}
