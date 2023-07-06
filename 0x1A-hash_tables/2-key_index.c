#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - index at which value gets stored
 * @size: size of the array
 * @key: the key
 *
 * Return: index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
