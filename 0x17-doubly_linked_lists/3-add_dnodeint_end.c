#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer
 * @n: int
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newtail;
dlistint_t *current;

newtail = malloc(sizeof(dlistint_t));
current = malloc(sizeof(dlistint_t));

if (newtail == NULL)
{
return (NULL);
}

newtail->n = n;
newtail->next = NULL;
newtail->prev = NULL;

if (*head == NULL)
{
*head = newtail;
}
else
{
current = *head;
}

while (current->next != NULL)
{
current = current->next;
}
newtail->prev = current;
return (newtail);
}
