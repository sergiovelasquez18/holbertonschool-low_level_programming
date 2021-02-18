#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the elements of an array
 * @a: contains the numbers
 * @n: is the number of elements of the array to be printed
 * Return: Always 0 (Succes)
 */
void print_array(int *a, int n)
{
	int fer;

	for (fer = 0; fer < n; fer++)
	{
		printf("%d", a[fer]);
		if (fer != n - 1)
			printf(",");
	}
	printf("\n");
}
