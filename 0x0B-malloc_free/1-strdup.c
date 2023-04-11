#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a pointer to a string
 * Return: pointer or NULL if the string euqles null
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, size;
if (str == NULL)
{
return (NULL);
}
size = strlen(str) + 1;
duplicate = malloc(size * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
