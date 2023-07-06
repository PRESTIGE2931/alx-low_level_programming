#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *present, *forward;

if (head == NULL || head->next == NULL)
return (NULL);
present = head->next;
forward = (head->next)->next;
while (forward)
{
if (present == forward)
{
present = head;
while (present != forward)
{
present = present->next;
forward = forward->next;
}
return (present);
}
present = present->next;
forward = (forward->next)->next;
}
return (NULL);
}