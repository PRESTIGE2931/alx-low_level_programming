#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * of the function.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: (newList) on success .
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *duplicate;
int count;
list_t *newList, *forward;

newList = malloc(sizeof(list_t));
if (newList == NULL)
return (NULL);
duplicate = strdup(str);
if (str == NULL)
{
free(newList);
return (NULL);
}
for (count = 0; str[count];)
count++;
newList->str = duplicate;
newList->len = count;
newList->next = NULL;
if (*head == NULL)
*head = newList;
else
{
forward = *head;
while (forward->next != NULL)
forward = forward->next;
forward->next = newList;
}
return (*head);
}
