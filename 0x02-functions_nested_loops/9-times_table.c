/*
 * File: 9-times_table.c
 * Author: Tayna Sousa
 */
#include "holberton.h"

/**
 * times_table - prints the 9 time tables, starting with 0
 * n: number; m: multiplication; p: product.
 */
void times_table(void)
{
	int p, n, m;
	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (p = 1; p < 10; p++)
		{
			_putchar(',');
			_putchar(' ');

			m = (p * n);
		if (m < 10)
			_putchar(' ');
		else
			_putchar((m / 10) + '0');

		_putchar((m % 10) + '0');
		} 
	_putchar('\n');
	}
}
