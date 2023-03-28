#include "main.h"

/**
 * _strcpy - copies the string pointed by a src 
 * @dest: destination
 * @src: the source to be copied
 * Return: char pointer 
 */
char *_strcpy(char *dest, char *src)
{
int length, i;
length = 0;
while (str[length])
{
length++;
}
for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
