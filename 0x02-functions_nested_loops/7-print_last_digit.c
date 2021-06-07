/** File: 7-last_digit.c  Author: Tayna Sousa **/
#include "holberton.h"

/**
 * main - prints the last number of a number
 *
 * Return: the value of the last number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (n * -1);
	}
	else
	{
		a = (n * 1);
	}

	n = a % 10;
	_putchar(n + '0');
	return (n);
}
