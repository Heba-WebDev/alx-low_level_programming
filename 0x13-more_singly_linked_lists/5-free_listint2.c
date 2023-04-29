#include "lists.h"



/**
 * free_listint2 - frees a linked list in memory
 * @head: the head of the linked list
 *
 * Return: void
 */


void free_listint2(listint_t **head)
{
listint_t *temp = *head;
while (temp)
{
temp = temp->next;
free(*head);
*head = temp;
}
head = NULL;
}

