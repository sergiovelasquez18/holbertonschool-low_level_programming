#include "holberton.h"
/**
 * print_chessboard - entry point
 * @a: array
 * Return: Always 0 (Succes)
 */
void print_chessboard(char (*a)[8])
{
	int f, n;

	for (f = 0; f < 8; f++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[f][n]);
		_putchar('\n');
	}
}
