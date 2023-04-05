#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - returns 1 for a prime number, otherwise 0
 * @n: an integer
 * Return: 1 for prime numbers and 0 otherwise
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
 * prime - finds if a numner is a prime or not
 * @n: an integer 
 * @i: counter
 * Return: 1 for prime numbers and 0 otherwise
 */
int prime(int n, int i)
{
if (i == n)
{
return (1);
}
else if (n % i == 0)
{
return (-1);
}
return (prime(n, i + 1));
}
