#include "holberton.h"
/**
 * *_strcat - print the elements of an array
 * @dest: contains the string
 * @src: contains the string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int sel, g;

	sel = 0;
	while (dest[sel] != '\0')
	{
		++sel;
	}
	for (g = 0; src[g] != '\0'; ++g, ++sel)
	{
		dest[sel] = src[g];
	}
	dest[sel] = '\0';
	return (dest);

