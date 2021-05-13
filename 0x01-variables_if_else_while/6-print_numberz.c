/* File: 6-print_numberz.c  Author: Tayna Sousa */
#include <stdio.h>

/**
 * main - print all numbers of base 10
 * without variable of type char
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
