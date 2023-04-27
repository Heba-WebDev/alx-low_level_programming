#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: the string given
 *
 * Return: length of str
 */

int _strlen(char *str)
{
int i = 0;
if (!str)
{
return (0);
}
while (*str++)
{
i++;
}
return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the list to print
 *
 * Return: structure of type size_t
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
count++;
}
return (count);
}
