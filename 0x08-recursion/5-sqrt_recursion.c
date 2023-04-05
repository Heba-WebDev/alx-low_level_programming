#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
int i, j;
j = n / 2;
i = 0;
if (n == 1)
{
return (1);
}
while (i < j)
{
if (i * i == n)
{
return (i);
}
i++;
}
return (-1);
}
