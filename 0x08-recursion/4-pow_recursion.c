#include "holberton.h"
/**
 * _pow_recursion - brings out the power
 * @x: variable
 * @y: variable
 * Return: length of the string
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
