#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a linked list.
 * @head: the head of the list
 * @index: the index of the node to be retured
 * Return: the sum of the data each nodes has
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int count = 0;

while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}
