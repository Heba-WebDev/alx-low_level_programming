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
char *concatenatedStr;
size1 = strlen(s1) + 1;
size2 = strlen(s2) + 1;
concatenatedStr = malloc((size1 *sizeof(char)) + (size2 *sizeof(char)));
for (i = 0; s1[i]; i++)
{
concatenatedStr[i] = s1[i];
j++;
}
for (i = 0; s2[i]; i++)
{
concatenatedStr[j] = s1[i];
j++;
}
return (concatenatedStr);
}
