#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
int length;
while (str[length] != '\0')
{
length++;
}
for (length = length - 1; length >= 0; length--)
{
_putchar(str[length]);
}
_putchar('\n');
}
