#include<stdio.h>
/**
* main - program prints all possible combinations of single-digit numbers
* Return: 0 (success)
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + 48);
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
