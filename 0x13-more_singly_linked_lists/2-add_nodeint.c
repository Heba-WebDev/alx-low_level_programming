#include "lists.h"


/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: the head of the linked list
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
{
return (0);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
