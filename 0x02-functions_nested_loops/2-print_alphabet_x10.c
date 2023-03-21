#include "main.h"
/**
* print_alphabet_x10 - A program that prints all alphabets 10 times
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(i);
}
_putchar('\n');
}
}
