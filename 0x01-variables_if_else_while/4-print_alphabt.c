/* File: 4-print_alphabt.c  Author: Tayna Sousa */
#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}

	putchar(ch);
	}

	putchar('\n');

	return (0);
}
