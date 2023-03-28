#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to the string to print its half
 */
void puts_half(char *str)
{
int length;
length = 0;
while (str[length])
{
length++;
}
if (length % 2 == 0)
{
length = length / 2;
}
else
{
length = (length + 1) / 2;
}
while (str[length] != '\0')
{
_putchar(str[length]);
}
_putchar('\n');
}
