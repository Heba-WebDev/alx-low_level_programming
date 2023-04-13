#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat -  a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate 
 * @n: length of the new string
 * Return: pointer to the new string 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
int len1, len2;
if (s1 != NULL)
{
len1 = strlen(s1);
}
if (s2 != NULL)
{
len2 = strlen(s2);
}
if (n >= len2)
{
n = len2;
}
concatenated = malloc(sizeof(char) * (len1 + n + 1));
if (concatenated == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strncpy(concatenated, s1);
}
if (s2 != NULL)
{
strncpy(concatenated, + len1, s2, n);
}
concatenated[len1 + n] = '\0';
return (concatenated);
}
