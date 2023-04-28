#include "lists.h"


/**
 * free_list - frees a list
 * @head: the head of the list to free
 *
 * Return: void
 */


void free_list(list_t *head)
{
if (!head)
{
return (NULL);
}
list_t *node, *temp;
node = head;
while (node)
{
temp = node->next;
free(node->str);
free(node);
node = temp;
}
}
