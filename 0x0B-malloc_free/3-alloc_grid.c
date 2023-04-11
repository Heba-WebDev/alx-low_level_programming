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
int **array;
int i;
if (width == 0 || height == 0)
{
return (NULL);
}
array = malloc(height * sizeof(int *));
if (array == NULL)
{
    free(array);
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = calloc(width, sizeof(int));
if (array[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(array[i]);
}
free(array);
return (NULL);
}
}
return (array);
}
