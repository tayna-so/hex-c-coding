/*
 * File: 7-print_diagonal.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int t, b;

	if (n > 0)
	{
		for (t = 0; t <= n; t++)
		{
			for (b = 2; b <= t; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
