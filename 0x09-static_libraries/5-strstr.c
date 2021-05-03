
#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: prim subcadena
 * @needle: string
 * Return: pointer to the beginning of the substring located at
 */
char *_strstr(char *haystack, char *needle)
{
	int f, g, p = 0;

	for (f = 0; haystack[f]; f++)
	{
		if (haystack[f] == needle[0])
		{
			for (g = 0; needle[g]; g++)
			{
				if (haystack[f + g] == needle[g])
					p = 1;
				else
					p = 0;
			}
		}
		if (p == 1)
			return (haystack + f);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
