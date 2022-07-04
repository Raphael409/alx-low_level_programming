#include <stdio.h>

/**
 * main - to print a single digit
 * number followed with new line
 * Return: 0 when successful
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
