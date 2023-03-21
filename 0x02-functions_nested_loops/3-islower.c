#include "main.h"

/**
 * _islower(int c) - prints if a letter is lower cased or not
 *
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
