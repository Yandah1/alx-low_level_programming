#include "hash_tables.h"

/**
 * hash_table_set - functionthat adds an element to the hash table
 * @ht: hash table
 * @key: the key (can't be empty string)
 * @value: value associated with the key (it can be empty string)
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	idx = hash_djb2((const unsigned char *) key) % ht->size;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
