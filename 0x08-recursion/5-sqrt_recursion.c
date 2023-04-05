#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer to get its square root
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt(n, 0));
}

/**
 * _sqrt - finds the squre root
 * @n: the integer to get its square root
 * @i: counter
 * Return: the square root
 */
int _sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
