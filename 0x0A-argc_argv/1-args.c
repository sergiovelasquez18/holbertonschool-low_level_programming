#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point
 * @argc: argument
 * @argv: array pointing to aruguments
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	}
	printf("%d\n", a - 1);
	return (0);
}
