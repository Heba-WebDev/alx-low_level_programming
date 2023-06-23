#include <regex.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string
 *
 * Return: the number or 0 if no number is present
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s++)
{
if (s == '-')
{
sign = -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
}
return (num *sign);
}
