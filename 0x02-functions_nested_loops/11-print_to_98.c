#include "main.h"

/**
 * print_to_98 - to print natural numbers
 * @n: integer
 * Return: integer
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if ((i % 1) == 1)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
