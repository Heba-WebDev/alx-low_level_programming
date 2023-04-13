#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory to int b using malloc
 * @b: number of bytes to allocate to memory
 * Return: pointer to allocated memory location or 98 for normal termination
 */
void *malloc_checked(unsigned int b)
{
void *val;
val = malloc(b);
if (val == NULL)
exit(98);
return (val);
}
