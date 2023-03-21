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
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
