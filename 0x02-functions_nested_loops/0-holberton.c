/* File: 0-holberton.c  Author: Tayna Sousa */
#include "holberton.h"

/**
 * main - prints Holberton
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "Holberton\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}

