#include "main.h"

/**
 * _isalpha - checks if there is an alphabet
 * @c: ascii character
 * Return: 1 if letter 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
