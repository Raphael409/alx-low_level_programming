#include "main.h"
#include <stdio.h>
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
			printf("%d", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			n--;
		}
	}
	_putchar('\n');
}
