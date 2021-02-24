#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: contains the string
 * @accept: bytes
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, m, val, ready;

	val = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		ready = 0;

		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[j])
			{
				val++;
				ready = 1;

			}
		}
		if (ready == 0)
			return (val);
	}
	return (val);
}
