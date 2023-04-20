#include "variadic_functions.h"


/**
 * print_numbers - prints numbers followed by a new line
 * @n: numbers of arguments passed
 * @separator: to be printed between the numbers
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list args;
va_start(args, n);
if (separator == NULL)
{
separator = "";
}
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
