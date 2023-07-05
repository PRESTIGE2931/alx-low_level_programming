#include "lists.h"

/**
 * sum_listint -  returns the sum of listint_t linked list.
 * @head: pointer to the head node
 * 
 * Return (sum)
*/
int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}