#include <stdio.h>
#include "holberton.h"
/**
 * main - Prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of pointers to the strings passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
