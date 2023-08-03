#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @n: pointer
 * @index: index of a bi
 *
 * Return: 1 for success, -1 for failuret
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
