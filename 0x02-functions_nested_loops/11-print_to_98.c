#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98.
 *@n: parm - given number
 * Return: 0 (success)
 */
void print_to_98(int n)
{
int i;
for(i = n; i <= 98; i++)
{
if (i < 98)
{
_putchar(i);
_putchar(' ');
_putchar(',');
}
else
{
_putchar(i);
}
}
_putchar('\n');
}
