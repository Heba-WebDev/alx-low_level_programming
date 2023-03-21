#include "main.h"

/**
 * _isalpha - prints if a letter is lower cased or not
 * @c: parameter to be printed
 * Return: 0 (if c is lowercase) 1 (if c is uppercase)
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
