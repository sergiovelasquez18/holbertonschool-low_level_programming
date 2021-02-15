#include <stdio.h>
/**
 * main - prints numbers and letters
 *
 * Return: Always 0 
 */
int main(void)
{
	int w;

	for (w = 48; w <= 57; w++)
	{
		putchar(w);
		if (w != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
