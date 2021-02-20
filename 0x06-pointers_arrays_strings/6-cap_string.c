#include "holberton.h"
/**
 * *cap_string - capitalize every word in a string
 * @s: chain entry
 * Return: s
 */
char *cap_string(char *s)
{
	int i, x;
	int ca = 32;
	int sep[] = {',', ';', '.', '?', '"',
		     '(', ')', '{', '}', ' ', '\n', '\t'};
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ca;
		}
	ca = 0;

	for (x = 0; x <= 12; x++)
	{
		if (s[i] == sep[x])
		{
			x = 12;
			ca = 32;
		}
	}

	}
	return (s);
}
