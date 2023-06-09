#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: the head of the list
 * @str: the data of the new node
 *
 * Return: new node of type list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_tail = malloc(sizeof(list_t));
list_t *current = *head;
if (!new_tail || !head)
{
return (NULL);
}
if (str)
{
new_tail->str = strdup(str);
if (!new_tail->str)
{
free(new_tail);
return (NULL);
}
new_tail->len = _strlen(new_tail->str);
}
if (current)
{
while (current->next != NULL)
{
current = current->next;
}
current->next = new_tail;
}
else
{
*head = new_tail;
}
return (new_tail);
}
