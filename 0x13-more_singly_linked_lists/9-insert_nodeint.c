#include "lists.h"



/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the linked list
 * @idx: the index where the new node to be inserted
 * @n: the data of the new node
 *
 * Return: the address of the new node or NULL in case of failer
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
int counter = 0;
listint_t *node = malloc(sizeof(listint_t));
listint_t *temp = *head;
if (!node)
{
return (NULL);
}
node->next = NULL;
node->n = n;
if (!node->n)
{
free(node);
return (NULL);
}
if (idx == 0)
{
node->next = temp;
}
else
{
while (temp)
{
if (counter + 1 == idx)
{
node->next = temp->next ? temp->next : NULL;
temp->next = node;
}
counter++;
temp = temp->next;
}
}
return (node ? node : NULL);
}
