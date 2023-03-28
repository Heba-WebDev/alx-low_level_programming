#include "main.h"

/**
 * print_rev- prints a string to stdout
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
int length;
length = 0;
while (s[length])
{
length++;
}
while (length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
