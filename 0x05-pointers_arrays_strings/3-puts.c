#include "main.h"

/**
 * _puts - prints a string
 * @str: an array of chars (string)
 */
void _puts(char *str)
{
int length;
length = 0;
while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}
