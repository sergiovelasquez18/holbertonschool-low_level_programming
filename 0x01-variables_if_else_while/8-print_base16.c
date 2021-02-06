#include <stdio.h>
/**
 * main - prints numbers and letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lu;
	char ve;

	for (lu = '0'; lu <= '9'; lu++)
		putchar(lu);
	for (ve = 'a'; ve <= 'f'; ve++)
		putchar(ve);
	putchar('\n');
	return (0);
}
