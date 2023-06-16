#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: the head of the list
 * @n: value of the new tail
 * Return: the new tail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newtail, *current;

newtail = malloc(sizeof(dlistint_t));
if (newtail == NULL)
{
return (NULL);
}

newtail->n = n;
newtail->next = NULL;
newtail->prev = NULL;

if (*head == NULL)
{
newtail->prev = NULL;
*head = newtail;
}
else
{
current = *head;

while (current->next != NULL)
	current = current->next;
	current->next = newtail;
	newtail->prev = current;
}
return (newtail);
}
