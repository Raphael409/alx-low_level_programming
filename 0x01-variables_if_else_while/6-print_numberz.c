#include <stdio.h>

/**
 * main - to print a single digit
 * number followed with new line
 * Return: 0 when successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar("%d", n);
	putchar("\n");
	return (0);
}
