#include "variadic_functions.h"

/**
 * sum_them_all - a functions that returns the sum of its parameters
 * @n: number of arguments passed to the function
 * @...: the rest of arguments
 * Return: int (sum
 */

int sum_them_all(const unsigned int n, ...)
{
int i = n;
int sum = 0;
va_list args;
if (!n)
{
return (0);
}
va_start(args, n);

while (i--)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
