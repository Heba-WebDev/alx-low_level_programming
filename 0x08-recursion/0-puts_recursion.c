#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a pointer to an array of char
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
_put_recursion(s++);
}
