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
int i = n;
va_list args;
if (!separator)
{
printf("\n");
return;
}
va_start(args, n);
printf("%d", va_arg(args, int));
while (i--)
{
printf("%d%s", va_arg(args, int),
i ? (separator ? separator : "") : "\n");
}
printf("\n");
va_end(args);
}
