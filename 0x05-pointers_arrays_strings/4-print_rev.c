#include "main.h"

/**
 * rev_string - prints a string to stdout
 * @s: pointer to the string to print
 */
void rev_string(char *s)
{
int length;
while (s[length] != '\0')
{
length++;
}
for (length = length - 1; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
