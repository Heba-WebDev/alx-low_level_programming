#include "lists.h"

/**
  *print_dlistint - prints all the elements of a list
  *@h: the list
  *
  *Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
int nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
