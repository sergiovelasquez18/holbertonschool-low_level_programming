#include "holberton.h"
/**
 * *_strcpy - copy string
 * @dest: contains the numbers
 * @src: is the number of elements of the array to be printed
 * Return: Always 0 (Succes)
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0, r;

	while (src[t] != '\0')
		t++;
	for (r = 0; r < t; r++)
		dest[r] = src[r];
	return (dest);
}
