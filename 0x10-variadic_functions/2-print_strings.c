#include "variadic_functions.h"


/**
 * print_strings - a function that prints strings
 * @separator: a separator to be printed between numbers
 * @n: number of arguments passed to the function
 * @...: the optional arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str)
{
printf("%s", str);
}
else
{
printf("nil");
}
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
