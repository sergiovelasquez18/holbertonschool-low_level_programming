#include "holberton.h"
/**
 * *_memcpy - copies the memory area.
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Succes)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
		dest[w] = src[w];
	return (dest);
}
