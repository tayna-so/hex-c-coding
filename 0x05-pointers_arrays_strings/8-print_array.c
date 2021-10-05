/** File: 8-print_array.c  Auth: Tayna Sousa **/
#include "holberton.h"
#include <stdio.h>

/**
 * print_array - it prints elements of an arrays of integers
 * @n: number of elements
 * @a: array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
		}
		printf("\n");
}
