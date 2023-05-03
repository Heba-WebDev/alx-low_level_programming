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
listint_t *next = NULL;

if (!head || !*head)
{
return (NULL);
}

while (*head)
{
next = (*head)->next;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
