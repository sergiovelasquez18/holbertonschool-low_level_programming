#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: contains the string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int p, ben;
	char *dep;

	if (str == NULL)
		return (NULL);
	for (ben = 0; str[ben] != '\0'; ben++)
		;
	dep = malloc(sizeof(char) * ben + 1);
	if (dep == NULL)
		return (NULL);
	for (p = 0; p < ben; p++)
		dep[p] = str[p];
	return (dep);
}
