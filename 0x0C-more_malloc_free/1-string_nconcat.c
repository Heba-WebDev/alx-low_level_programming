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
unsigned int len1, len2, len;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
len = len1 + len2;
}
else
{
len = len1 + n;
}
concatenated = malloc(len + 1);
if (concatenated == NULL)
{
return (NULL);
}
strncpy(concatenated, s1, len1);
strncpy(concatenated + len1, s2, len - len1);
concatenated[len] = '\0';
return (concatenated);
}
