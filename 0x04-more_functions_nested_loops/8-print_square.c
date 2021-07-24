/*
 * File: 8-print_square.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * print_square - Prints a square, using the character #
 * @size: is the size of the square
 */

void print_square(int size)
{
	int repeat, line;

	if (size > 0)
	{
		for (repeat = 1; repeat <= size; repeat++)
		{
			for (line = 1; line <= size; line++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

