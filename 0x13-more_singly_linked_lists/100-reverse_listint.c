#include "lists.h"



/**
 * reverse_listint - revers a linked list
 * @head: head of the linked list to be reversed
 *
 * Return: address of the head of the new linked list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = NULL;

if (!head || !*head)
{
return (NULL);
}
current = *head;

while (current)
{
if (!prev)
{
current->next = NULL;
}
else
{
current->next = prev;
}
prev = *head;
current = (*head)->next;
*head = current;
}
return (*head);
}
