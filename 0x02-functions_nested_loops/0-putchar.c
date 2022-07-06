#include <main.h>

/**
 * main - Entry point
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char txt[9] =  "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}
