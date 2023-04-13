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
int i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = malloc(sizeof(char) * (strlen(s1) + n + 1));
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
if (n >= strlen(s2))
{
n = strlen(s2);
strcpy(concatenated + strlen(s1), s2);
}
else
{
for (i = 0; i < n; i++)
{
concatenated += s2[i];
}
}
return (concatenated);
}
