#include "lists.h"

/**
  *print_dlistint - prints all the elements of a list
  *@h: the list
  *
  *Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d", h->n);
nodes++;
h = h->next;
}

return (nodes);
}
