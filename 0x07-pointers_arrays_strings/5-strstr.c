#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
if (haystack == needle)
{
return (&haystack);
}
haystack++;
}
return (NULL);
}

