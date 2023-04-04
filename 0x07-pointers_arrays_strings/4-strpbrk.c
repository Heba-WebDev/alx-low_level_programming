#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int length;
char *p;
while (*s)
{
for (p = accept; *p; p++)
{
if (*s == *p)
{
length++;
break;
}
}
if (*p == '\0')
{
break;
}
length++;
}
return (length);
}
