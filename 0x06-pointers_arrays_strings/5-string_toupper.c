#include "holberton.h"
/**
 * *string_toupper - change uppercase to lowercase
 * @h: pointer
 * Return: Always 0 (Succes)
 */
char *string_toupper(char *h)
{
	int z = 0;

	while (h[z] != '\0')
	{
		if (h[z] >= 'a' && h[z])
		{
			h[z] = h[z] - 'a' + 'A';
		}
		z++;
	}
	return (h);
}
