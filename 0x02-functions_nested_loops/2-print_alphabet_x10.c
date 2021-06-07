/*
 * File: 2-alphabet_x10
 * Auth: Tayna Sousa
 */
#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
	char ch, count;

	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		count++;
		_putchar('\n');
	}
}
