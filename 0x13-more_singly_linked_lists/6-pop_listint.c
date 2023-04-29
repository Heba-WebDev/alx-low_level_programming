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
listint_t *new_head;
if (!*head)
{
return (NULL);
}
data = (*head)->n;
new_head->next = (*head)->next;
free(*head);
head = new_head;
return (data);
}
