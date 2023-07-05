#include "lists.h"

/**
 * pop_listint - free's the head node
 * @head: pointer to the head node
 * 
 * Return (value) value of n of the head node  
*/
int pop_listint(listint_t **head)
{
listint_t *hold;
int value = 0;

if(*head == NULL)
return (0);
else{
hold = *head;
value = (*head)->n;
*head = (*head)->next;
free(hold);
}
return (value);
}