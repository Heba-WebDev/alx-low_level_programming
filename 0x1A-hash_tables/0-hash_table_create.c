#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: hash_table_t (On success) NULL (On failure)
 */


hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *hash = malloc(sizeof(hash_table_t));

if (hash == NULL || size == 0)
{
return (NULL);
}

hash->size = size;
hash->array = malloc(sizeof(hash_table_t *) * size);
if (hash->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
hash->array[i] = NULL;
}
return (hash);
}
