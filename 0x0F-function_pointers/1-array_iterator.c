#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a parameter on each element of an array
 * @array: the array to execute the parameter on its elements
 * @size: the size of the array
 * @action: the action to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
while(size > 0)
{
action(*array++);
size--;
}
}
}
