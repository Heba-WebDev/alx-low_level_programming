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
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
