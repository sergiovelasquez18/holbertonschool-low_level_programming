#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: Proven chain
 * @accept: desired entry
 * Return: Always 0 (Succes)
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
				return (s + j);
		}
	}
	return ('\0');
}
