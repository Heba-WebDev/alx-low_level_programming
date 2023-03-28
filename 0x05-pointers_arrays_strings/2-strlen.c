#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a char
 * Return: length
 */
int _strlen(char *s)
{
int length;
length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
