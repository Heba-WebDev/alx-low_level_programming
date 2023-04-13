#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checke - llocates memory using malloc
 * @b: size of the memory to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
int *value;
value = malloc(b);
if (value == NULL)
{
exit(98);
}
}