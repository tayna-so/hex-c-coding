/*
 * File: 6-abs.c
 * Author: Tayna Sousa
 */
#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: The number which absolute value will be printed
 * Return: The absolute value
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;

		return (a);
	}
	else
	{
		return (n);
	}
}
