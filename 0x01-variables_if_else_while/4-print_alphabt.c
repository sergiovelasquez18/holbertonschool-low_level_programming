#include <stdio.h>
/**
 * main - prints alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s, e, q;

	e = 'e';
	q = 'q';
	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != e && s != q)
			putchar(s);
	}
	putchar('\n');
	return (0);
}
