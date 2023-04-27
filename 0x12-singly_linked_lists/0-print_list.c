#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the list to print
 *
 * Return: structure of type size_t
 */

size_t print_list(const list_t *h)
{
int count = 0;
list_t *new;
new = malloc(sizeof(list_t));
if (h == NULL)
{
return (-1);
}
else
{
new = h;
}
while (new != NULL)
{
if (new->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s\n", strlen(new->str), new->str);
}
new = new->next;
count++;
}
printf("-> %d elements", count);
return (count);
}
