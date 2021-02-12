#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * Return: Always 0 (Succes)
 */
void print_line(int n)
{
	int e;

	e = 0;
	for (e = 0; e < n; e++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
