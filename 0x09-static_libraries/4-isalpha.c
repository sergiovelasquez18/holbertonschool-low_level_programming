#include "holberton.h"
/**
 *_isalpha - a function that checks for alphabetic character
 * @c: letter type
 * Return: 1 if int c is lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
