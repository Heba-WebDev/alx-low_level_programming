#include "lists.h"



/**
 * reverse_listint - revers a linked list
 * @head: head of the linked list to be reversed
 *
 * Return: address of the head of the new linked list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *current = NULL;
listint_t *next = NULL;

if (!head || !*head)
{
return (NULL);
}

current = *head;
*head = NULL;
while (current)
{
next = current->next;
current->next = *head;
*head = current;
current = next;
}
return (*head);
}
