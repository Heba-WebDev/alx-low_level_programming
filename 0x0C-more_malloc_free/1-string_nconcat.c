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
int len, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len = strlen(s1);
concatenated = malloc(sizeof(char) * (len + 1));
if (concatenated == NULL)
{
return (NULL);
}
len = 0;
for (i = 0; s1[i]; i++)
{
concatenated[len++] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
{
concatenated[len++] = s2[i];
}
concatenated[len] = '\0';
return (concatenated);
}
