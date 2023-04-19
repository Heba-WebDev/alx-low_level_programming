#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
