#include "main.h"

/**
 * rev_string- reverses a string
 * @s: pointer to the string to reverse
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
