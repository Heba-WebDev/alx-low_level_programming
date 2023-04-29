#include "lists.h"


/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: the head of the linked list
 *
 * Return: the sum of all data or NULL if the linked list is empty
 */



int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *node = head;
if (!node || !head)
{
return (0);
}
while (node)
{
if (node->n)
{
sum += node->n;
}
node = node->next;
}
return (sum);
}
