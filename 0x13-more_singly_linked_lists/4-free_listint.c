#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free's the specified node form the memory
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *hold;

while (head)
{
hold = head->next;
free(head);
head = hold;
}
}
