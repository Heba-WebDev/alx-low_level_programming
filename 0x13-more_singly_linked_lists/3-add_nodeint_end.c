#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the linked list
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;
if (!new_node)
{
return (0);
}
new_node->n = n;
new_node->next = NULL;
if (!head)
{
*head = new_node;
return (new_node);
}
while (current->next)
{
current = current->next;
}
current->next = new_node;
return (new_node);
}
