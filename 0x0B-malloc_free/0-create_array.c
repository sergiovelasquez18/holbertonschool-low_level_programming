#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size od array
 * @c: characters in the array
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	v = malloc(size * sizeof(char));
	if (v == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		v[i] = c;
	return (v);
}
