#include "hash_tables.h"

/**
 * key_index - function gives the index of a key
 * @key: the key as a string
 * @size: size of the array the key is stored in
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
