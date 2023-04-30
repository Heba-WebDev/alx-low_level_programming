#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node from a linked list
 * @head: head of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: (1) if successful, 0 otherwise
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *temp = *head;
listint_t *node;
if (!head)
{
return (0);
}
while (temp && counter <= index)
{
if (counter == index - 1)
{
node = temp->next;
temp = node->next ? node->next : NULL;
free(node);
return (1);
}
}
return (0);
}
