/* File: 8-print_comb.c  Auth: Tayna Sousa */
#include <stdio.h>

/**
 * main - print all possible combinations of
 * single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
