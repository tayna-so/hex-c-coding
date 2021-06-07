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
	int num;

	if (n < 98)
	{
		for (num = 0; num < 99; num++)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (num = n; num > 97; num--)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
