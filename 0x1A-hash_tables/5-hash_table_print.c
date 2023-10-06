#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	int first = 1;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!first)
				printf(", ");
			else
				first = 0;

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}

	}

	printf("}\n");
}
