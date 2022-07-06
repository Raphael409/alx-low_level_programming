#include "main.h"

/**
 * print_to_98 - to print natural numbers
 * @n: integer
 * Return: integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar('%d', n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar('%d', n);
			n--;
		}
	}
	_putchar('\n');
}
