#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: contains the value of the variable
 * Return: Always 0 (Succes)
 */
void rev_string(char *s)
{
	char m = s[0];
	int n = 0;
	int o;

	while (s[n] != '\0')
		n++;

	for (o = 0; o < n; o++)
	{
		n--;
		m = s[o];
		s[o] = s[n];
		s[n] = m;
	}
}
