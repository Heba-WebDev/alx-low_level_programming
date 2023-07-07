#include "hash_tables.h"

/**
 * hash_table_get - returns value assosiated with a key
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 *
 * Return: value or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *newhash;
unsigned long int index;
if (!ht || !key)
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);
newhash = ht->array[index];

while (newhash)
{
if (strcmp(newhash->key, key) == 0)
{
return (newhash->value);
}
newhash = newhash->next;
}
return (NULL);
}
