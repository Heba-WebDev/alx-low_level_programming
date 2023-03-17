#include<stdio.h>
/**
* main - A program that prints all letters lower cased
* Return: 0 (success)
*/
int main(void)
{
for (int letter = 97; letter <= 122; letter++)
{
putchar(letter);
putchar('\n');
}
return (0);
}
