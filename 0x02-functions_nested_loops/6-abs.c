#include "main.h"

/**
 * _abs(int) - prints the absolute value of the number
 * @n: parameter to be printed
 * Return: 0 (success)
 */
int _abs(int n)
{
if (n > 0 || n == 0)
{
_putchar(n);
}
else
{
_putchar(-(n));
}
return (0);
}
