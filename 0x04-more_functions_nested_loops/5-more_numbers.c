#include "holberton.h"
/**
 * more_numbers - prints 10 times from 0 to 14
 *
 * Return: Always 0 (Succes)
 */
void more_numbers(void)
{
	int s;
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s > 9)
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
		}
	_putchar('\n');
	}
}
