#include <stdio.h>
/**
 * main - prints numbers and letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	for (h = 0; h <= 99; h++)
	{
		putchar(h / 10 + '0');
		putchar(h % 10 + '0');
		if (h != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
