#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - allocates memory using malloc
 * @f: function pointer
 * @name: name of the person
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
