#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * n - prints a random number
 * l - prints the last number of n
 *
 */

/* function - prints if last digit of a random number is greater than 5 or less than 6 or 0 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}

	return (0);
}
