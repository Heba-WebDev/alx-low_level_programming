#include "lists.h"


/**
 * add_node - adds a node to the beginning of a list
 * @head: the head of the list
 * @str: the string of the new node
 *
 * Return: the new head of the list
 */



list_t *add_node(list_t **head, const char *str)
{
list_t *new_head;
new_head = malloc(sizeof(list_t));
if (!new_head)
{
return (NULL);
}
if (!head)
{
return (0);
}
new_head->str = strdup(str);
new_head->next = head;
return (new_head);
}
