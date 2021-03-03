#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - summary of the cadenas
 * @s1: contains a string
 * @s2: contains a string
 * Return: two concatenated chains
 */
char *str_concat(char *s1, char *s2)
{
	int t, g, size;
	char *a;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	for (t = 0; s1[t] != '\0'; t++)
		;
	for (g = 0; s2[g] != '\0'; t++)
		;
	size = t + g + 1;
	a = malloc(sizeof(char) * size);
	if (a == 0)
		return ('\0');
	for (t = 0; s1[t] != '\0'; t++)
	{
		*(a + t) = *(s1 + t);
	}
	for (g = 0; s2[g] != '\0'; g++)
	{
		*(a + t + g) = *(s2 + g);
	}
	return (a);
}
