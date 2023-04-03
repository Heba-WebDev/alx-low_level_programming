#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: pointer
 * @c: pointer
 * Return: char
 */
char *_strchr(char *s, char c)
{
unsigned int length;
while (*s)
{
if (*s != C)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
