#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer or NULL if memory alloction fails
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, size1, size2;
j= 0;
char *concatenatedStr;
if (s1 != NULL)
{
s1 = strlen(s1);
}
if (s2 != NULL)
{
s2 = strlen(s2);
}
concatenatedStr = malloc((size1 + size2 + 1) * sizeof(char));
if (concatenatedStr == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strcpy(concatenatedStr, size1);
}
if (s2 != NULL)
{
strcpy(concatenatedStr + size1, size2);
}
return (concatenatedStr);
}
