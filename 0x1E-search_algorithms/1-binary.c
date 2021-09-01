#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int firts = 0, last = 0, middle = 0, idx = 0;

	if (array == NULL || size == 0)
		return (-1);

	last = size - 1;

	while (firts <= last)
	{
		idx = 0;
		printf("Searching in array: ");
		for (idx = firts; idx <= last; idx++)
			if (idx == last)
			{
				printf("%d\n", array[last]);
				break;
			}
			else
				printf("%d, ", array[idx]);

		middle = (firts + last) / 2;
		if (array[middle] < value)
			firts = middle + 1;
		else if (array[middle] > value)
			last = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
