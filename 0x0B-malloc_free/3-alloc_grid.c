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
int i, j;
int **array;
if (height <= 0 || width <= 0)
{
return (NULL);
}
array = (int **)malloc(height * sizeof(array));
if (array == NULL)
{
free(array);
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
if (array[i] == NULL)
{
for (j = 0; j < i; j++)
free(array[j]);
free(array);
return (NULL);
}
for (j = 0; j < width; j++)
array[i][j] = 0;
}
return (array);
}
