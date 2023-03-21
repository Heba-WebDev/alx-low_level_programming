#include "main.h"

/**
 * _islower - prints if a letter is lower cased or not
 *
 * Return: 0 (lowecase) 
 * Return: 1 (uppercase)
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
