/*
 * File: 4-print_most_numbers.c
 * Auth: Tayna Sousa
 */
#include "holberton.h"

/**
 * print_most_numbers - Prints the numbers from 0-9
 */
void print_most_numbers(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{
			continue;
		}
		else
		{
		_putchar(n);
		}
	}
	_putchar('\n');
}
