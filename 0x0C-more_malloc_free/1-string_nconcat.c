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
int i, j;
i = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = malloc(sizeof(* char) * (n + strlen(s1)));
if (concatenated == NULL)
{
return (NULL);
}
if (n > strlen)
{
while (i < strlen(s1))
{
concatenated += s1[i];
i++;
}
while (j < strlen(s2))
{
concatenated += s2[j];
i++;
j++;
}
}
while (i < strlen(s1))
{
concatenated[i] += s1[i];
i++;
}
for ( j = 0; j < n; j++)
{
concatenated += s2[i];
}
return (concatenated);
}
