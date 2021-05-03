#include "holberton.h"
/**
 * _puts - prints a string
 * @str: contains the string
 * Return: Always 0 (Succes)
 */
void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar (str[g]);
	}
	_putchar('\n');
}
