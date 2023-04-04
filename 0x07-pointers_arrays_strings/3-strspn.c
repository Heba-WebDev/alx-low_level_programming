#include "main.h"
#include <stddef.h>
/**
* _strspn - a function that gets the length of a prefix substring
* @s: pointer
* @accept: pointer
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
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
return (length);
}
