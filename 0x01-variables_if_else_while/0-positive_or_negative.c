#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *The main function: to determine whether the number is positive or negative
 * Return 0: Returns zero when the program is successiful
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
