#include<stdio.h>
/**
* main - program prints all possible combinations of single-digit numbers
* Return: 0 (success)
*/
int main(void)
{
int digit;
for (digit = 48; digit <= 57; digit++)
{
putchar(digit);
if (digit == 57)
{
continue;
}
else 
{
putchar(',');
putchar(' ');
}
}
return (0);
}
