#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 when successful
 */
int main(void)
{
	int m, n;

	m = 48;
	n = 48;
	while (m < 48)
	{
		n = 48;
		while (n < 58)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				if (n == 57 && m == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
