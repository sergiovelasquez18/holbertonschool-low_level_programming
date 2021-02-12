#include "holberton.h"
/**
 * print_square - prints a square
 * @size: size is the size of the square
 * Return: Always 0 (Succes)
 */
void print_square(int size)
{
	int m;
	int p;

	for (m = 0; m < size; m++)
	{
	for (p = 0; p < size; p++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
