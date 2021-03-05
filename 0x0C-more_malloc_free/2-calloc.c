#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: size of the array
 * @size: the size of the memory to print
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(size * nmemb);
	if (f == NULL)
		return (NULL);
	for (j = 0; j < (size * nmemb); j++)
		f[j] = 0;
	return (f);
}
