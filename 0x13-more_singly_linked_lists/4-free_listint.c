#include "lists.h"



/**
 * free_listint - frees a linked list in memory
 * @head: the head of the linked list
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
