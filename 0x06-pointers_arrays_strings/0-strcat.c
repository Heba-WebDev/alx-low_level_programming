#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: a pointer to char
 * @dest: a pointer to desintation 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int s = 0, i = 0;

	while (dest[s] != 0)
	{
		s++;
	}
	while (src[i] != 0)
	{
		dest[s + i] = src[i];
		i++;
	}

	dest[s + i] = 0;
	return (dest);
}
