#include<stdio.h>
/**
* main - A program that prints all letters lower cased except e and q
* Return: 0 (success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if(letter != 'e' || letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
