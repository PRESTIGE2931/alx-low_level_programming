#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: the nth node of the list
 * @head: the pointer to the first node of the list
 *
 * Return: (head)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int Node = 0;

while (Node < index)
{
if (head == NULL)
return (NULL);

head = head->next;
Node++;
}
return (head);
}
