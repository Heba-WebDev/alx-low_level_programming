#include "main.h"

/**
 * _islower - prints if a letter is lower cased or not
 * @c: parameter to be printed
 * Return: 0 (if c is lowercase) 1 (if c is uppercase)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
