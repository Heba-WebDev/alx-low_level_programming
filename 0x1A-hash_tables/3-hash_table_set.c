#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *newhash;
char *value_cp;
unsigned long int index, i;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

value_cp = strdup(value);
if (value_cp == NULL)
	return (0);

index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_cp;
return (1);
}
}

newhash = malloc(sizeof(hash_node_t));
if (newhash == NULL)
{
free(value_cp);
return (0);
}
newhash->key = strdup(key);
if (newhash->key == NULL)
{
free(newhash);
return (0);
}
newhash->value = value_cp;
newhash->next = ht->array[index];
ht->array[index] = newhash;

return (1);
}
