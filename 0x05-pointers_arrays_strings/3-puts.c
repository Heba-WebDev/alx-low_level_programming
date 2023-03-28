#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to an array of chars (string)
 */
void _puts(char *str)
{
int length;
length = 0;
for (length = 0; length != '\0'; length++)
{
_putchar(str[length]);
}
_putchar('\n');
}
