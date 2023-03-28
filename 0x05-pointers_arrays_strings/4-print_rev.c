#include "main.h"

/**
 * rev_string - prints a string to stdout
 * @s: pointer to the string to print
 */
void rev_string(char *s)
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
