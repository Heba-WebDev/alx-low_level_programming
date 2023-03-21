#include "main.h"

/**
 * _isalpha - prints the sign of the number
 * @n: parameter to be printed
 * Return: 0 (if n == 0) 1 (if n > 0) -1 (otherwise)
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (0);
}
}
