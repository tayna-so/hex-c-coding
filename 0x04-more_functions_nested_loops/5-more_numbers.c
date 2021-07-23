/*
 * File: 5-more_numbers.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers (0-14)
 */

void more_numbers(void)
{
	int times, numbers;

	for (times = 0; times < 10; times++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers > 9)
			{
				_putchar(numbers / 10 + '0');
			}
			_putchar(numbers % 10 + '0');
		}
	_putchar('\n');
	}
}
