#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @tu: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int tu)
{
	int na;

	na = (tu % 10);

	if (na < 0)
	{
		na = (-1 * na);
	}

	_putchar(na + '0');
	return (na);
}
