/** File: 11-print_to_98.c  Author: Tayna SOusa **/
#include "holberton.h"
#include <stdio.h>
/**
 * main - print all natural numbers from n to 98
 *
 * Return: Always 0
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
	else if (n == 98)
	{
		printf("98");
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
