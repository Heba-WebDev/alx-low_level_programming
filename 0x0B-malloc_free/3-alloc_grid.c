#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid- pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to array or NULL if either h or w are null
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}
int *array;
int i, j;
array = calloc((height * width), sizeof(int));
if (array == NULL)
{
return (NULL);
}
return (array);
}
