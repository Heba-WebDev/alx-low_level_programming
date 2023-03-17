#include<stdio.h>
/**
* main - A program that prints all numbers of base 16
* Return: 0 (success)
*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + 48);
}
for (number = 0; number < 6; number++)
{
putchar(number + 97);
}
putchar('\n');
return (0);
}
