#include<stdio.h>
/**
* main - A program that prints all single digits numbers of base 10
* Return: 0 (success)
*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + 48);
}
putchar('\n');
return (0);
}
