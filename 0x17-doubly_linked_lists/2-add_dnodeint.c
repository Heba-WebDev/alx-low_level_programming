#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer
 * @n: int
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newhead;

newhead = malloc(sizeof(dlistint_t));
if (newhead == NULL)
{
return (NULL);
}

newhead->n = n;
newhead->next = *head;
newhead->prev = NULL;

if (*head != NULL)
{
(*head)->prev = newhead;
}

*head = newhead;
return (newhead);
}
