#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: A pointer to the hash table.
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *newhash;
unsigned long int i;
unsigned char comma_flag = 0;

if (ht == NULL)
return;
printf("{");

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma_flag == 1)
{
printf(", ");
}
newhash = ht->array[i];
while (newhash)
{
printf("'%s': '%s'", newhash->key, newhash->value);
newhash = newhash->next;
if (newhash != NULL)
printf(", ");
}
comma_flag = 1;
}
}
printf("}\n");
}
