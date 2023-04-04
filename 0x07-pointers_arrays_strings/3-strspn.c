#include "main.h"
#include <stddef.h>
/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: pointer
* @c: pointer
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (s == accept)
{
return (s);
}
else
{
s++;
}
}
return (NULL);
}
