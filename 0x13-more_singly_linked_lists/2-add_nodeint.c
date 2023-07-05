#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the address of the first node
 * @n: number to be duplicated
 * 
 * Return (newNode) address of newNode
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if(newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
