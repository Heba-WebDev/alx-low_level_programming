#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 * @i: an integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i > (n / 2))
{
return (-1);
}
else
{
return (_sqrt_recursion(n, i + 1));
}
}
