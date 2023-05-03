#include "lists.h"



/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the linked list to print
 *
 * Return: size of the linked list
 */



size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
if (!head)
{
return (98);
}

while (head)
{
printf("[%p] %i\n", &head, head->n);
count++;
head = head->next;
}

return (count);
}
