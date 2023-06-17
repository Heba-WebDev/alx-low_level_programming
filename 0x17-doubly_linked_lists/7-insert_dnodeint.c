#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node
 * @h: head of the linked list
 * @idx: the index at which the node to be inserted
 * @n: the data value the node will store
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node = malloc(sizeof(dlistint_t));
dlistint_t *current;
unsigned int count = 0;

if (h == NULL || node == NULL)
{
return (NULL);
}
node->n = n;
node->next = NULL;
node->prev = NULL;
current = *h;

if (idx == 0)
{
node = add_dnodeint(h, n);
return (node);
}
while (current)
{
if (current->next == NULL && count == idx - 1)
{
node = add_dnodeint_end(h, n);
return (node);
}
else if ((idx - 1) == count)
{
node->next = current->next;
node->prev = current;
current->next->prev = node;
current->next = node;
return (node);
}
count++;
current = current->next;
}
free(node);
return (NULL);
}
