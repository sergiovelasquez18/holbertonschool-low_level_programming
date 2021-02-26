#include "holberton.h"
#include "2-strlen_recursion.c"
/**
 * checker - if the string is palindrome
 * @s: string being evaluated
 * @gen:highest index of string
 * @e: lowest index of string
 * Return: 1 if true, 0 if not
 */
int checker(char *s, int gen, int e)
{
	if (gen <= e)
		return (1);
	if (s[gen] != s[e])
		return (0);
	return (checker(s, gen - 1, e + 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string being evaluated
 * Return: 1 if true, otherwise 0
 */
int is_palindrome(char *s)
{
	int gen, v;

	if (s[0] == '\0')
		return (1);
	gen = _strlen_recursion(s);
	v = checker(s, gen - 1, 0);
	return (v);
}
