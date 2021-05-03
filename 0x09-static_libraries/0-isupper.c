#include "holberton.h"
/**
 *_isupper - search for capitalized characters
 * @c: letter type
 * Return: return 1 uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
