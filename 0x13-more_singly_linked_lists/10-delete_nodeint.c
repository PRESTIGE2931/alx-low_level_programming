#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete a node from a list at some given index
* @head: header pointer
* @index: index of the node to be deleted
* Return: 1 onSuccess
* Error: -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *hold, *value = *head;
unsigned int node;

if (value == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(value);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (value->next == NULL)
return (-1);
value = value->next;
}
hold = value->next;
value->next = hold->next;
free(hold);
return (1);
}
