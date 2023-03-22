#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98.
 *@n: parm - given number
 * Return: 0 (success)
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
_putchar(i);
}
else
{
_putchar(i);
_putchar(' ');
_putchar(',');
}
}
}
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
