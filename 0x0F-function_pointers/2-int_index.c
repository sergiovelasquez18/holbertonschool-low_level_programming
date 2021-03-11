#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	if (size <= 0)
		return (-1);
	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]))
			return (d);
	}
	return (-1);
}
