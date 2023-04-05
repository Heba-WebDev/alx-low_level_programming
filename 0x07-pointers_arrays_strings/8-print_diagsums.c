#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: a pointer to an array of char
 * @size: the given size of the matrix 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum1, sum2, j;
sum1 = 0;
sum2 = 0;
j = size * size;
for (i = 0; i < s; i += size + 1)
{
sum1 += a[i];
}
for (i = size - 1; i < s - 1; i += size - 1)
{
sum2 += a[i];
}
printf("%d, %d\n", sum1, sum2);
}
