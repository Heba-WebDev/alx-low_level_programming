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
