#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 when successful
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char chr = 'a';

		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		i++;
		_putchar('\n');
	}
}
