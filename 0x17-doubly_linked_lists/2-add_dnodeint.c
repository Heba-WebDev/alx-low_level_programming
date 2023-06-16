#include "lists.h"

/**
 * add_dnodeint - adds a new head
 * @head: the head of the list
 * @n: the value of the new head
 * Return: the new head
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
newhead->next = head;
newhead->prev = NULL;

if (*head != NULL)
{
(*head)->prev = newhead;
}
head = newhead;
return (newhead);
}

