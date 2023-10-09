#include "search_algos.h"


/**
 * linear_search - search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to find
 *
 * Return: value -1
 */

int linear_search(int *array, size_t size, int value)
{
    if (!array) return (-1);
    size_t i = 0;
    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if(array[i] == value)
        {
            return (i);
        }
    }
    return -1;
}
