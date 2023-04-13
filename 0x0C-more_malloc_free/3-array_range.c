#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: array of integers
 */
int *array_range(int min, int max)
{
void *array;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
array[i] = min++;
}
return (array);
}
