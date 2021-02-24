#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: size the matrix
 * Return: Always 0 (Succes)
 */
void print_diagsums(int *a, int size)
{
	int r, s, resul1 = 0, resul2 = 0;

	for (r = 0; r <= (size * size); r = r + size + 1)
		resul1 = resul1 + a[r];
	for (s = size - 1; s <= (size * size) - size; s = s + size - 1)
		resul2 = resul2 + a[s];
	printf("%d, %d\n", resul1, resul2);
}
