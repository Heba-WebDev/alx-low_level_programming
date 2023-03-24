#include "main.h"

/**
*print_line - prints 0 to 9 except 2 and 4
*@n: input of type int
*
*Return: void
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
