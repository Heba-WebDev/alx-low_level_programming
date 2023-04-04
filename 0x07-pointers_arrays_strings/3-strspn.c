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
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
length++;
break;
}
else if (accept[i + 1] == '\0')
{
return (length);
}
s++;
}
return (length);
}
