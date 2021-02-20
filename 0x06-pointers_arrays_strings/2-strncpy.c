#include "holberton.h"
/**
 * *_strncpy - copy two strings
 * @dest: copy
 * @src: copy
 * @n: char entry number
 * Return: Always 0 (Succes)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		if (k < n)
			dest[k] = src[k];
	while (k < n)
		dest[k++] = '\0';
	return (dest);
}
