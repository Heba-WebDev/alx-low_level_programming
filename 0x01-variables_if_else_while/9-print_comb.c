#include<stdio.h>
/**
* main - A program that prints all possible combinations of single-digit numbers
* Return: 0 (success)
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 8; digit++)
{
putchar(digit + 48);
putchar(',');
putchar(' ');
}
putchar(57);
return (0);
}
