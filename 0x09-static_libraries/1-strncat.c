#include "holberton.h"
/**
 * *_strncat - concatenates 2 strings
 * @dest: copy
 * @src: copy
 * @n: bytes used
 * Return: Always 0 (Succes)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, ol;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}

	for (ol = 0; ol < n; ol++)
	{
		dest[a + ol] = src[ol];
		if (src[ol] == '\0')
			ol = n;
	}
	return (dest);
}
