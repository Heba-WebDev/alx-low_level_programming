#include "main.h"

/**
 * _isdigit - returns 1 if input is a digits from 0 to 9
 * @c: input to be checked
 *
 * Return: 1 (if it's a digit') 0 (if not)
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
