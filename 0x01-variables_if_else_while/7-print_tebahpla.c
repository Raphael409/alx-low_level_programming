#include <stdio.h>

/**
 * main - entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
