#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - has operators correlated with
 * signs of func and funcs of op_func
 * if there are not 4 arguments, returns Error & exit 98
 * if op is null, returns Error & exit 99
 * if div or mod 0, returns Error & exit 100
 * run calc, input one, operator, input two = res pointer to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int on, tw, an;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	on =  atoi(argv[1]);
	tw = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(get_op);
	an = res(on, tw);

	printf("%d\n", an);
	return (0);
}
