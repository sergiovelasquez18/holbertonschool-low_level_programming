#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int seb;
	int ser;

	for (ser = '0'; ser <= '9'; ser++)
	{
		for (seb = 'a'; seb <= 'z'; seb++)
		{
			_putchar(seb);
		}
		_putchar('\n');
	}
}
