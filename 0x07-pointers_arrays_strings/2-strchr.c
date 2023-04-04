#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the string 
 * @c: the character to locate in the string
 * Return: a pointer to c or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
{
s++;
}
}
return (0);
}
