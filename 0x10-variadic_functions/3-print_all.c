#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @ap: list of arguments passed into the main function
 * Return: the passed argument
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_integer - prints an integer
 * @ap: list of arguments passed into the main fuction
 * Return: the passed argument
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: list of arguments passed into the main fuction
 * Return: the passed argument
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - prints a string
 * @ap: list of arguments passed into the main fuction
 * Return: Return: the passed argument
 */
void print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
}

/**
 * print_all - a fuction that prints numbers
 * @format: the string to be prited between numbers
 * Return: the passed argument
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int j, h;
	va_list ap;

	print_t list[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL},
	};
	va_start(ap, format);
	j = 0;
	while ((format != NULL) && (format[j] != '\0'))
	{
		h = 0;
		while (list[h].name != NULL)
		{
			if (*(list[h].name) == format[j])
			{
				printf("%s", separator);
				list[h].type(ap);
				separator = ",";
			}
			h++;
		}
		j++;
		h = 0;
	}
	printf("\n");
	va_end(ap);
}
