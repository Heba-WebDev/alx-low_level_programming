#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the linked list to be reversed
 *
 * Return: the address of the head of the linked list reversed
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
*head = current;
return (*head);
}
