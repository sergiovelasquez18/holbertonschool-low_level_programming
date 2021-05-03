#include "holberton.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@em : integer input
 * Return: absolute value of em
 */
int _abs(int em)

{
	if (em < 0)
	{
		return (-em);
	}
	else
		return (em);
}
