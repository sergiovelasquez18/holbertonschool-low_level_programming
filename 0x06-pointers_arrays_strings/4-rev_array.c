#include "holberton.h"
/**
 * reverse_array - concatenates 2 strings
 * @a: copy
 * @n: contains number of elements of the array
 * Return: Always 0 (Succes)
 */
void reverse_array(int *a, int n)
{
	int v, ca;

	for (v = 0; v < n; v++)
	{
		n--;
		ca = a[v];
		a[n] = a[n];
		a[n] = ca;
	}
}
