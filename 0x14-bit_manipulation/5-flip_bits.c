#include "main.h"
/**
 * flip_bits - function returns the number of bits we flip to get
 * from one number to another.
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_count = n ^ m;
	unsigned int num = 0;

	while (xor_count > 0)
	{
		num += xor_count & 1;
		xor_count >>= 1;
	}
	return (num);
}
