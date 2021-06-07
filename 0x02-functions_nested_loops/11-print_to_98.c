/*
 * File: 11-print_to_98.c
 *  Author: Tayna Sousa
 */
#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: The number that will begin the count to 98
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}

	else
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
