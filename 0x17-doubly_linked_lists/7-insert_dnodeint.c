#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: the head of the linked list
 * @idx: the index at which the new node will be inserted
 * @n: the data stored in the new node
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
int count = 0;
dlistint_t *node = NULL, *current = *h;

node = malloc(sizeof(dlistint_t));

if (node == NULL)
{
return (NULL);
}
node->n = n;
node->prev = NULL;
node->next = NULL;

if (*h == NULL)
{
*h = node;
return (*h);
}

while (current != NULL)
{
if (count == idx)
{
node->next = current->next;
node->prev = current;
current->next = node;
return (node);
}
count++;
current = current->next;
}
return (NULL);
}
