#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key to look for
 * Return: the vlaue or NULL on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node;

	if (ht->array[idx] == NULL || ht->array[idx] == 0)
		return (NULL);

	if (!strcmp(ht->array[idx]->key, key))
		return (ht->array[idx]->value);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
