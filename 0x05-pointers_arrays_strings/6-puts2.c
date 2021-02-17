#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: contains the string
 * Return: Always 0 (Succes)
 */
void puts2(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		if (u % 2 == 0)
			_putchar (str[u]);
	}
	_putchar('\n');
}
