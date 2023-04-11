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
unsigned int i, counter, size1, size2;
counter = 0;
char *concatenatedStr;
if (s1 != NULL)
{
size1 = strlen(s1);
}
else
{
s1 = "";
}
if (s2 != NULL)
{
size2 = strlen(s2);
}
else
{
s2 = "";
}
concatenatedStr = malloc((size1 + size2 + 1) * sizeof(char));
if (concatenatedStr == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
concatenatedStr[counter] = s1[i];
}
for (i = 0; i < size2; i++)
{
concatenatedStr[counter] = s2[i];
}
return (concatenatedStr);
}
