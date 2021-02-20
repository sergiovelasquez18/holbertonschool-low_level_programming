#include "holberton.h"
/**
 * *leet - entry
 * @s: pointer
 * Return: Always 0
 */
char *leet(char *s)
{
	int l, y;
	int f[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rem[] = {'4', '3', '0', '7', '1'};

		for (l = 0; s[l] != '\0'; l++)
		{
			for (y = 0; y <= 9; y++)
			{
				if (s[l] == f[y])
				{
					s[l] = rem[y / 2];
					y = 9;
				}
			}

		}
	return (s);
}
