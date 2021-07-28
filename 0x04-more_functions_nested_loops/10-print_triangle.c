/*
 * File: 10-print_triangle.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * print_triangle - Prints a triangle, using the character #
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int line, repeat;

	if (size > 0)
	{
		for (repeat = 1; repeat <= size; repeat++)
		{
			for (line = size - repeat; line > 0; line--)
			{
				_putchar(' ');
			}
			for (line = 0; line < repeat; line++)
			{
				_putchar(35);
			}
			if (line == size)
			{
				continue;
			}
			_putchar('\n');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

