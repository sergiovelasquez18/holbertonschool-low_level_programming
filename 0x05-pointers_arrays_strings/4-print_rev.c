#include "holberton.h"
/**
 * print_rev - prints a string upside down
 * @s: contains the string
 * Return: Always 0 (Succes)
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	for (x = 0; s[x] != '\0';)
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar (s[y]);
	}
	_putchar('\n');
}
