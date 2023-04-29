#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node to be searched for
 *
 * Return: index of the node if found, otherwise NULL
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0;
listint_t *node = head;
if (!head)
{
return (NULL);
}
while (node && counter < index)
{
node = node->next;
counter++;
}
return (node ? node : NULL);
}
