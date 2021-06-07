/*
 * File: 7-last_digit.c
 * Author: Tayna Sousa
 */
#include "holberton.h"

/**
 * print_last_digit - prints the last number of a number
 * @n: The number which last digit will be printed
 * Return: the value of the last number
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
	{
		a *= -1;
	}

	_putchar(a + '0');

	return (a);
}
