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
