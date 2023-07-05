#include "lists.h"
#include <stdio.h>

/**
 * print_listint -returns number elements of a listint_t list type.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: (count) number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
