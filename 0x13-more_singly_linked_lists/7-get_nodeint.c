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
int counter = 0;
listint_t *node;
while (head)
{
if (counter == index)
{
node = head;
return (node);
}
head = head->next;
counter++;
}
return (NULL);
}
