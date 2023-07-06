#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the address of the first element
 * @n: to be duplicated
 *
 * Return: (newNode) address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *hold;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
*head = newNode;
else
{
hold = *head;
while (hold->next != NULL)
hold = hold->next;
hold->next = newNode;
}
return (newNode);
}
