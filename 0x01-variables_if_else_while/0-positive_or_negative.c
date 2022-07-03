#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function: to determine whether the number is positive or negative
 * Return: Returns 0 zero when the program is successiful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);	
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);

}
