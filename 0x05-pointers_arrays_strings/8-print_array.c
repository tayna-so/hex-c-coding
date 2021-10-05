/** File: 8-print_array.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * print_array - it prints elements of an arrays of integers
 * @n: number of elements
 * @a: array of integers
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
