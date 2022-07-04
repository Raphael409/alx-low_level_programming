#include <stdio.h>

/**
 * main - prints single digit number
 * of base 10 from zero followed by a new
 * line
 * Return: 0 when successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
