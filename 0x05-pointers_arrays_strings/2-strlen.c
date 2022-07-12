#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string to determine the length
 * Return: 0 when success
 */
int _strlen(char *s)
{
	int n;
	
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
