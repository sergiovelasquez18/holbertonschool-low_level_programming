#include "holberton.h"

/**
 * print_binary - prints binary representation of number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int d, f;
	int flg = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (d = 63; d >= 0; d--)
	{
		f = n >> d;
		if (f & 1)
		{
			flg = 1;
			_putchar('1');
		}
		else if (flg == 1)
			_putchar('0');
	}
}
