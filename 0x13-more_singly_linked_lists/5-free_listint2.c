#include "lists.h"



/**
 * free_listint2 - frees a linked list in memory
 * @head: the head of the linked list
 *
 * Return: void
 */


void free_listint2(listint_t **head)
{
listint_t *temp;
if (!*head)
{
printf("(nil)\n");
return (NULL);
}
while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}

