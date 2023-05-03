#include "lists.h"



/**
 * reverse_listint - revers a linked list
 * @head: head of the linked list to be reversed
 *
 * Return: address of the head of the new linked list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *prev = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
