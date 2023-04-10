#include "main.h"

/**
 * _isupper - returns 1 if input is uppercase and 0 otherwise.
 * @c: input to be checked
 *
 * Return: 0 (if upper case) 1 (if not)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
