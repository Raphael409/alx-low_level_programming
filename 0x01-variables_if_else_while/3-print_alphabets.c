#include <stdio.h>

/**
 * main - To display the alphabets in lower case
 * then followed in upper case
 * Return: returns 0 when successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
