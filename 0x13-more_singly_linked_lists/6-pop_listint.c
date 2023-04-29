#include "lists.h"



/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head to delete
 *
 * Return: the data of the deleted head
 */


int pop_listint(listint_t **head)
{
int data;
listint_t *temp = *head;
if (!*head)
{
return (0);
}
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}
