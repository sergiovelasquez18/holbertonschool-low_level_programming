#include "holberton.h"
/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * Return: Always 0 (Succes)
 */
void print_numbers(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
	_putchar(f + 0);
	}
	_putchar('\n');
}
