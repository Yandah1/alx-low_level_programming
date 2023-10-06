#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that create a hash table
 * @size: size of the array
 * Return: pointer to the new created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	if (size < 1)
		return (NULL);

	hashTable = malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));

	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
