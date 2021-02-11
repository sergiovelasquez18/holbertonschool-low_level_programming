#include "holberton.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: Always 0 (Succes)
 */
void print_most_numbers(void)
{
	char q;

	for (q = '0'; q <= '9'; q++)
	{
		if (q != '2' && q != '4')
		_putchar(q);
	}
	_putchar('\n');
}
