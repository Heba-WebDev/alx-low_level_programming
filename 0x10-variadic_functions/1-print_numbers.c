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
int i = n - 1;
va_list args;
if (separator != NULL)
{
va_start(args, n);
printf("%d", va_arg(args, int));
while (i--)
{
printf("%c %d", separator, va_arg(args, int));
}
printf("\n");
}
va_end(args);
}
