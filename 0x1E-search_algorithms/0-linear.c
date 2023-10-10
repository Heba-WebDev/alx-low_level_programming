#include "search_algos.h"

/**
  * linear_search - seach algorithm
  * @array: the array to search
  * @size: the size of the array to search
  * @value: the value to search for
  *
  * Return: the value or -1 if not found
  * or the array is empty
  */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
