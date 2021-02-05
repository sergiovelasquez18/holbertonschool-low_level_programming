#include <stdio.h>
/**
 * main - prints lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ser;

	for (ser = 'a'; ser <= 'z'; ser++)
		putchar(ser);
	for (ser = 'A'; ser <= 'Z'; ser++)
		putchar(ser);
	putchar('\n');
	return (0);
}
