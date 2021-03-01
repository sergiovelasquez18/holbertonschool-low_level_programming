#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - program that adds two numbers
 * @argc: arguments count
 * @argv: array pointers ti the strings passed
 * Return: Always 0, return 1 if an error
 */
int main(int argc, char *argv[])
{
	int sum = 0, a, e, i;

	for (a = 1; a < argc; a++)
	{
		for (e = 0; argv[a][e] != '\0'; e++)
		{
			if (argv[a][e] < '0' || argv[a][e] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i = atoi(argv[a]);
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
