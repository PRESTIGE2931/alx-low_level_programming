#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *hold;
unsigned int i = 0;

newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
if (*head == NULL)
{
*head = newNode;
newNode->next = NULL;
return (newNode);
}
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
hold = *head;
while (i < (idx - 1) && hold->next)
{
hold = hold->next;
i++;
}
if (i < idx - 1)
return (NULL);
newNode->next = hold->next;
hold->next = newNode;
return (newNode);
}