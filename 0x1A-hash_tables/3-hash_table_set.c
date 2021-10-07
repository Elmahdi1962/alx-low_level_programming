#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key (can't be empty string)
 * @value: value associated with the key (it can be empty string)
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *hn;
	char *k = malloc(sizeof(char) * strlen(key));
	char *val = malloc(sizeof(char) * strlen(value));

	if (key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	hn = malloc(sizeof(hash_node_t));

	if (hn == NULL)
		return (0);

	strcpy(k, key);
	strcpy(val, value);
	hn->key = k;
	hn->value = val;

	if (ht->array[idx] == NULL || ht->array[idx] == 0)
	{
		ht->array[idx] = hn;
		hn->next = NULL;
	} else
	{
		hn->next = ht->array[idx];
		ht->array[idx] = hn;
	}
	return (1);
}
