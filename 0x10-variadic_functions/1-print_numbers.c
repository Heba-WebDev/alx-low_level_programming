#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a separator to be print between the numbers
 * @n: the number of arguments passed to the function
 * @...: the rest of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
if (separator)
{
va_list args;
va_start(args, n);
printf("%d", va_arg(args, int));
for (i = 0; i < n - 1; i++)
{
printf("%c %d", separator, va_arg(args, int));
}
printf("\n");
}
}
