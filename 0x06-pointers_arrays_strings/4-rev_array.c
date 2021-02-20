#include "holberton.h"
/**
 * reverse_array - concatenates 2 strings
 * @a: copy
 * @n: contains number of elements of the array
 * Return: Always 0 (Succes)
 */
void reverse_array(int *a, int n)
{
	int v = 0;
	int ca = n - 1;
	int se;

	while (v < ca)
	{
		se = a[v];
		a[v] = a[ca];
		a[ca] = se;
		v++;
		ca--;
	}
}
