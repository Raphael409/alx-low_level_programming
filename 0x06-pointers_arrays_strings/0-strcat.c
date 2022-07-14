#include "main.h"

/**
 * _strcat - Function that concatenates strings
 * @dest: destination.
 * @src: source.
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count1++;
	}

	while (count2 >= 0)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
