#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *array_range - creates an array of integers
 * @min: the minimum of the range
 * @max: the max number in the range
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *c;
	int j;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	c = malloc(sizeof(int) * size);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		c[j] = min;
		min++;
	}
	return (c);
}
