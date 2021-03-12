#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - a fuction that prints numbers
 * @separator: the string to be prited between numbers
 * @n: number of integers passed to the function
 * Return: the numbers passed through the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && (j < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
