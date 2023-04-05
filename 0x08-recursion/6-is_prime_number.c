#include "main.h"

int _sqrt(int n, int i);

/**
 * is_prime_number - returns 1 for a prime number, otherwise 0
 * @n: an integer 
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if (n == 2 || n == 3)
{
return (1);
}
return (prime(n, 2));
}

/**
 * _sqrt - finds the squre root
 * @n: the integer to get its square root
 * @i: counter
 * Return: the square root
 */
int prime(int n, int i)
{
if (n % i == 0)
{
return (-1);
}
while (i < n)
{
return (prime(n, i + 1));
}
return (-1);
}
