#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: the element of the array
 * @size: size in memory
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;
if (size == 0 || nmemb == 0)
{
return (NULL);
}
array = malloc(nmemb * size);
if (array != NULL)
{
memset(array, 0, nmemb * size);
}
return (array);
}
