#include "main.h"
#include "stdio.h"

/**
 * print_array - prints every element of an array
 * @n: number of elements to be printed
 * @a: a pointer to the array of intgers
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
