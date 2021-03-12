#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - a fuction that prints numbers
 * @separator: the string to be prited between numbers
 * @n: number of integers passed to the function
 * Return: the numbers passed through the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int l;

	va_start(ap, n);
	for (l = 0; l < n; l++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((separator != NULL) && (l < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
