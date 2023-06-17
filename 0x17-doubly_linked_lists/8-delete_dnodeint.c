#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: head of the linked list
 * @index: the index at which the node to be deleted
 * Return: the new node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int count = 0;

if (head == NULL)
{
return (-1);
}

current = *head;

if (index == 0)
{
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}

while (current)
{
if (count == index - 1)
{
current->prev->next = current->next;
current->next->prev = current->prev;
free(current);
return (1);
}
}

return (-1);
}
