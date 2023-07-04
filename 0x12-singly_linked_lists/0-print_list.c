#include "lists.h"

/**
 * print_list - prints all the 
 * elements of a list_t list function
 * @h: pointer
 * Return: (count) number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t len = 0;
int count;
const list_t *c = h;

for (count = 0; c; count++)
{
if (c->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", c->len, c->str);
c = c->next;
len++;
}
return (len);
}