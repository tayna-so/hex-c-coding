/*
 * File: 6-print_line.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int t;

	if (n > 0)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
