#include "holberton.h"
int sqr_root(int n, int rot);
/**
 * sqr_root - return the natural sqr root
 * @n: number being squared
 * @rot: squre root
 * Return: square root the number
 */
int sqr_root(int n, int rot)
{
	if (n == rot * rot)
		return (rot);
	else if (n < rot * rot)
		return (-1);
	return (sqr_root(n, rot + 1));
}

/**
 * _sqrt_recursion - return the natural sqr root
 * @n:  number being squared
 * Return: square root the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_root(n, 0));
}
