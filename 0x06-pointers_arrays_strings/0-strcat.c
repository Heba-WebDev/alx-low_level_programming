#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: a pointer to char
 * @dest: a pointer to desintation 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
dest[length] = '\0';
return (dest);
}
