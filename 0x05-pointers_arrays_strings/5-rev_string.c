#include "main.h"

/**
 * rev_string- reverses a string
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
int length, i;
length = 0;
while (s[length])
{
length++;
}
for (i = 0; i < length/2; i++)
{
char temp;
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
_putchar('\n');
}
