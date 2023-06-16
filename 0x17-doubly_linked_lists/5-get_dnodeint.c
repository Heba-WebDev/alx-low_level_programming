#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node to be returned
 * Return: the node if found or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}

while (head != NULL)
{
if (index == count)
{
return (head);
}
count++;
head = head->next;
}
return (NULL);
}
