#include "holberton.h"
int prime(int a, int s);
/**
 * prime - check which is prime and which is not
 * @a: number tested
 * @s: number tested
 * Return: funtion prime
 */
int prime(int a, int s)
{
	if (a < 2)
		return (0);
	if (a / 2 < s)
		return (1);
	if (a % s == 0)
	{
		return (0);
	}
	return (prime(a, s + 1));
}

/**
 * is_prime_number - returns 1 if it is a prime number
 * @n: number tested
 * Return: funtion prime
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
