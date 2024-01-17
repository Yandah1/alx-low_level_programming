#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located.
 * If the value is not present or if the array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, *array);

		if (*array == value)
		{
			return (i);
		}

		array++;
	}

	return (-1);
}

