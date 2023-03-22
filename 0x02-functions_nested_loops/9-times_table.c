#include "main.h"

/**
 * times_table - prints the multiplication table
 * Return: 0 (success)
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int multi = i * j;
if (j < 9)
{
_putchar(multi);
_putchar(' ');
_putchar(',');
}
else
{
_putchar(multi);
}
}
_putchar('\n');
}
}
