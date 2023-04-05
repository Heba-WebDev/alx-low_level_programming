#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt(n, 1));
}


int sqrt(int n, int i)
{
if (i * i > n/2)
{
return (-1);
}
else if (i * n == i)
{
return (i);
}
return (sqrt(n, i + 1));
}
