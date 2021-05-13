/* File: 5-print_numbers.c  Author: Tayna Sousa */
#include <stdio.h>

/**
 * main - prints numbers of base 0 to 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");

	return (0);
}
