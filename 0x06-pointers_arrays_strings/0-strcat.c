#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: a pointer to char
 * @dest: a pointer to desintation 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
