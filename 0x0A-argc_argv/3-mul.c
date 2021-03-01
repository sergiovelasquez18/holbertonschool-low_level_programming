#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: array pointing to the strings passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int r, les = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (r = 1; r < argc; r++)
		{
			les *= atoi(argv[r]);
		}
		printf("%d\n", les);
	}
	return (0);
}
