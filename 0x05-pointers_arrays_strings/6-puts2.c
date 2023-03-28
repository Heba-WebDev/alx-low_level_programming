#include "main.h"

/**
 * puts2 - prints every other letter of a string
 * @str: pointer to the string to print its letters
 */
void puts2(char *str)
{
int length, i;
length = 0;
while (str[length])
{
length++;
}
for (i = 0; i < length; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
