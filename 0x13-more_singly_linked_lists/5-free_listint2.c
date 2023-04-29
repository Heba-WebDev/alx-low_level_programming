#include "lists.h"



/**
 * free_listint2 - frees a linked list in memory
 * @head: the head of the linked list
 *
 * Return: void
 */


void free_listint2(listint_t **head)
{
listint_t *temp = malloc(sizeof(listint_t));
if (!temp)
{
return;
}
if (*head == NULL)
{
printf("(nil)\n");
return;
}
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}

