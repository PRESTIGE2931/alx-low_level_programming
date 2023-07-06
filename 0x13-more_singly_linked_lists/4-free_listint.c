#include <stdlib.h>
#include "lists.h"

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
