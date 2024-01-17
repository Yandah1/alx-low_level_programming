#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located.
 * If the value is not present or if the array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, m;
	int last_index = (int)size - 1;
	int first_index = 0;

	if (array == NULL)
		return (-1);

	while (first_index <= last_index)
	{
		printf("Searching in array:");

		for (i = first_index; i <= last_index; i++)
		{
			printf(" %i", array[i]);
			if (i != last_index)
				printf(",");
		}
		printf("\n");

		m = (int)((first_index + last_index) / 2);

		if (value > array[m])
			first_index = m + 1;
		else if (value < array[m])
			last_index = m - 1;
		else
			return (m);
	}

	return (-1);
}

