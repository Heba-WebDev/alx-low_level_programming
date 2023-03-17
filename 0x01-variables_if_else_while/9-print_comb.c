#include<stdio.h>
/**
* main - program that prints all possible combination of digits numbers
* Return: 0 (success)
*/
int main(void)
{
int digit;
for (digit = 48; digit <= 57; digit++)
{
putchar(digit);
if(digit == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
return (0);
}
