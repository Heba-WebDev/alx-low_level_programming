#include "lists.h"


/**
 * listint_len -  returns the number of elements in a linked list
 * @h: the head of the linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;
if (!h)
{
return (0);
}
while (h)
{
len++;
h = h->next;
}
return (len);
}
