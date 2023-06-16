#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: the head of the linked list
 * @n: the data of the node to be inserted at the end
 * Return: the new node at the end of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tail = NULL, *current = *head;

tail = malloc(sizeof(dlistint_t));

if (tail == NULL)
{
return (NULL);
}
tail->n = n;
tail->prev = NULL;
tail->next = NULL;

if (*head == NULL)
{
*head = tail;
return (*head);
}

while (current->next != NULL)
{
current = current->next;
}
tail->prev = current;
current->next = tail;

return (tail);
}
