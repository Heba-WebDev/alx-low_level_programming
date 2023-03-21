#include "main.h"
/**
* print_alphabet_x10 - A program that prints all alphabets 10 times
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
for (int j = 97; j <= 122; j++)
{
_putchar(i);
}
_putchar('\n');
}
_putchar('\n');
}
