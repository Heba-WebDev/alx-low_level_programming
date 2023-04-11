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
if (width == NULL || height == NULL)
{
return (NULL);
}
int *array;
int i, j;
array = malloc(sizeof(int) * (height * width));
for (i = 0; i < array; i++)
{
for (j = 0; j < array; j++)
{
array[i][j] = 0;
}
}
return (array);
}
