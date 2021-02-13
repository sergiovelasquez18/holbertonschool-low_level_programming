#include "holberton.h"
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: is the number of times the character \ should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int ca;
	int po;

	if (n <= 0)
	{
	_putchar ('\n');
	}
else
{
	for (ca = 1; ca <= n; ca++)
	{
		for (po = 1; po < ca; po++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
