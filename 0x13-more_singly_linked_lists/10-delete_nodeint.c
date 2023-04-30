#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node from a linked list
 * @head: head of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: (1) if successful, -1 otherwise
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *node = NULL;
unsigned int counter = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (counter < index - 1)
{
if (!temp || !(temp->next))
{
return (-1);
}
temp = temp->next;
counter++;
}

node = temp->next;
temp->next = node->next;
free(node);

return (1);
}
