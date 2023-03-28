#include "main.h"

/**
 * swap_int - takes two integers and sawp their values
 * @a: an int
 * @b: an int
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
