#include "hash_tables.h"

/**
 * hash_table_delete -function that deletes a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *ptr;
	unsigned long int i;

	if (ht == NULL)
		return;


	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (node->next == NULL)
			{
				free(node->value);
				free(node->key);
				free(node);
				continue;
			}
			while (node != NULL)
			{
				ptr = node;
				node = node->next;
				free(ptr->value);
				free(ptr->key);
				free(ptr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
