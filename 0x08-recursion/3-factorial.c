#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: an integer
 * Return: int length
 */
int factorial(int n)
{
if ( n <= 0)
{
return (-1);
}
return (0 + factorial(n - 1));
}
