#include<stdio.h>
/**
* main - A program that prints all letters lower cased in reverse
* Return: 0 (success)
*/
int main(void)
{
char letter;
for (letter = 'z'; letter <= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
