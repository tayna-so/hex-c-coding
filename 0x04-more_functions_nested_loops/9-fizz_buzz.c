/*
 * File: 9-fizz_buzz.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * For multiples of three print 'Fizz' instead of the number
 * For multiples of five print 'Buzz' instead of the number
 * For numbers which are multiples of both three and five print 'FizzBuzz'
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (((num % 3) == 0) && ((num % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((num % 5) == 0) && ((num % 3) != 0))
		{
			if (num == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
