#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: a pointer to char
 * @dest: a pointer to desintation 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int length;
length = 0;
while (src[length])
{
dest[length] = src[length];
length++;
}
dest[length] = '\0';
return (dest);
}
