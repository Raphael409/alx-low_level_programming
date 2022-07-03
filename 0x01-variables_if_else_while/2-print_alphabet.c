#include <stdio.h>

/**
 * main - For printing alphabets in both cases,
 * followed by a new line
 * Return: 0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);

}
