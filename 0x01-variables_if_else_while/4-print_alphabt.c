#include <sdio.h>

/**
 * main - prints alphabets in lower case
 * without q and e
 * Return: 0 when successsful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
