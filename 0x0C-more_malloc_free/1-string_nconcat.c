#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int a, b, st1, st2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0' && b < n; b++)
		;
	st1 = a;
	st2 = b;
	d = malloc(sizeof(char) * (st1 + st2 + 1));
	if (d == NULL)
		return (NULL);
	for (a = 0; a < st1; a++)
	{
		d[a] = s1[a];
	}
	for (b = 0; b < st2; b++)
		d[a + b] = s2[b];
	d[a + b] = '\0';
	return (d);
}
