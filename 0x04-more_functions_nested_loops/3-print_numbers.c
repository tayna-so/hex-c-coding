/**
 * File: 3-print_numbers.c
 * Auth: Tayna Sousa
 */
#include "holberton.h"

/**
 * 3-print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Numbers 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
