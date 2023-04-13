#include <stdlib.h>
#include "main.h"

/**
 * malloc_checke - llocates memory using malloc
 * @b: size of the memory to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *value;
value = malloc(b);
if (value == NULL)
{
exit(98);
}
return (value);
}