#include <stdlib.h>
#include "main.h"
/**
**malloc_checked - allocates memory using malloc
*@b: number of bytes to allocate in memory
*Return: a pointer in case of success or 98 otherwise
*/
void *malloc_checked(unsigned int b)
{
void *val;
val = malloc(b);
if (val == NULL)
{
exit(98);
}
return (val);
}