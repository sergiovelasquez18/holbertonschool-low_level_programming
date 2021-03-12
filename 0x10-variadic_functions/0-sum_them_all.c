#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all of its parameters
 * @n: number of arguments in the function
 * Return: the sum of all of the arguments passed of 0 if == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int a;
	int sum;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	sum = 0;
	for (a = 0; a < n; a++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
