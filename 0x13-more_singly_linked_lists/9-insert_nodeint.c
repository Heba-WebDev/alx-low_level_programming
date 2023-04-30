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
unsigned int counter = 0;
listint_t *node = malloc(sizeof(listint_t));
listint_t *temp;

if (!head)
{
return (NULL);
}

if (!node)
{
free(node);
return (NULL);
}

node->n = n;

if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}

temp = head;
while (temp)
{
if (counter == (idx - 1))
{
node->next = temp->next;
temp->next = node;
return (node);
}
temp = temp->next;
counter++;
}
free(node);
return (NULL);
}
