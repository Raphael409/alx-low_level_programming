#include <stdio.h>

/**
 * main - to print lower case alphabets 
 * in reverse followed by a new line
 * Return: 0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
