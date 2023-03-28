#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to the string to print its half
 */
void puts_half(char *str)
{
int length, i;
length = 0;
while (str[length])
{
length++;
}
if (length % 2 == 0)
{
for (i = length / 2; str[i]; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (length - 1) / 2; str[i]; i++)
{
_putchar(str[i + 1]);
}
}
_putchar('\n');
}
