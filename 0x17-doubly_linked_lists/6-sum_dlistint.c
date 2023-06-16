#include "lists.h"

/**
 * sum_dlistint - sums all data of the nodes
 * @head: the head of the list
 * Return: the sum of the data each nodes has
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
