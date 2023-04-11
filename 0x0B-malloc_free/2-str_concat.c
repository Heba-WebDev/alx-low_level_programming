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
unsigned int i, size;
char *concatenated_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size = strlen(s1) + strlen(s2);
concatenated_str = malloc((size + 1) * sizeof(char));
if (concatenated_str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concatenated_str[i] += s1[i];
}
for (i = 0; s2[i] != '\0'; i++)
{
concatenated_str[strlen(concatenated_str)] += s2[i];
}
concatenated_str[strlen(concatenated_str)] = '\0';
return (concatenated_str);
}
