#include "main.h"

/**
 * rint_last_digit - prints last digit of a number
 * @n: parameter to be printed
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if(last < 0)
{
_putchar(-last + 48);
return (-last);
}
else
{
_putchar(last + 48);
return (last);
}
}
