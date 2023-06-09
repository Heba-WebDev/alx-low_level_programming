#include "main.h"



/**
 * flip_bits -  the number of bits you would need to flip to get
 *  from one number to another
 *  @n: the number
 *  @m: the number to flip to
 *
 *  Return: the number of bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bits = 0;
unsigned long int difference = n ^ m;

while (difference)
{
bits += (difference & 1);
difference >>= 1;
}

return (bits);
}
