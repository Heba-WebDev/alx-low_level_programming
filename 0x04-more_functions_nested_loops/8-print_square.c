#include "main.h"

/**
*print_square - prints the square # of a given number
*@n: input of type int
*
*Return: void
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
