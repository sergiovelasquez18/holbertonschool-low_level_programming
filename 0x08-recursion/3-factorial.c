#include "holberton.h"
/**
 * factorial - factor out the factorial
 * @n: whole to be tested
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
