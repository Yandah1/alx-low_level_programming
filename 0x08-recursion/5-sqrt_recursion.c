#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - helper function to find the square root of a number
 * @n: the number to find the square root of
 * @i: the possible square root
 * Return: the square root of n, or -1 if n is not a perfect square
 */
int _sqrt_helper(int n, int i)
{

	if (i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
