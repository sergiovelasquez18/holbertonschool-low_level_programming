#include "holberton.h"
/**
 * *_strchr - places a character in a string
 * @s: content string
 * @c: input
 * Return: Always 0 (Succes)
 */
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (s + r);
	}
	return ('\0');
}
