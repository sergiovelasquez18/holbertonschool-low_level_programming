#include <stdio.h>
/**
 * main - prints numbers and letters
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 48; i < 58; i++)
	{
		putchar (i);
		putchar (j);
		if (i != 56 || j != 57)
		{
			putchar (44);
			putchar (32);
		}
	}

}
putchar('\n');
return (0);
}
