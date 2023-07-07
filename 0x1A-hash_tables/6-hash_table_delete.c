#include "hash_tables.h"

/**
 * hash_table_print - deletes a hash table
 * @ht: A pointer to the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{

hash_table_t *head = ht;
hash_node_t *newhash, *tmp;
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
newhash = ht->array[i];
while (newhash)
{
tmp = newhash->next;
free(newhash->key);
free(newhash->value);
free(newhash);
newhash = tmp;
}
}
}
free(head->array);
free(head);
}
