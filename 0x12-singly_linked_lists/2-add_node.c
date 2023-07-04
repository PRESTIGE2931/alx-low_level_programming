#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the start of a nodeList
 * @head:last node list
 * @str:string
 * Return: (newList) node created
 */
list_t *add_node(list_t **head, const char *str)
{
char *duplicate;
list_t *newList = (list_t *)malloc(sizeof(list_t));

if (newList == NULL)
{
free(newList);
return (NULL);
}
duplicate = strdup(str);
newList->len = strlen(duplicate);
newList->str = duplicate;
newList->next = *head;
*head = newList;
return (newList);
}
