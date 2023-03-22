#include "main.h"

/**
 * main - prints the sum of the multiples of 3 or 5 below 1024 (excluded)
 */
void main(void)
{
int sum = 0;
int i;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || i % 5 == 0)
{
sum += i;
}
}
_putchar(sum);
_putchar('\n');
}
