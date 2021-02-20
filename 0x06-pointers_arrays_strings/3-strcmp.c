#include "holberton.h"
/**
 *  _strcmp - concatenates 2 strings
 * @s1: contains the string
 * @s2: contains the string
 * Return: Always 0 (Succes)
 */
int _strcmp(char *s1, char *s2)
{
	int u;

	for (u = 0; s1[u] != '\0' && s2[u] != '\0'; u++)
	{
		if (s1[u] != s2[u])
			return (s1[u] - s2[u]);
	}
	return (0);
}
