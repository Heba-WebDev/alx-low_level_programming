#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to an array of char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
int length;
length = 0;
while (*s != '\0') {
length++;
s++;
}
if (*s)
{
_putchar(*s);
_print_rev_recursion(s--);
}
_putchar('\n');
}
