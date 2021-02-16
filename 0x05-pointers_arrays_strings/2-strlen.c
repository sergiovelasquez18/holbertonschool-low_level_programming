#include "holberton.h"
/**
 * _strlen - returns the value of a string
 * @s: contains the value of the variable
 * Return: Always 0 (Succes)
 */
int _strlen(char *s)
{
	int devl = 0;

	while (s[devl] != '\0')
		devl++;
	return (devl);
}
