/* File: 7-print_tebahpla.c  Auth: Tayna Sousa */
#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char num = 'a';

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);

	putchar('\n');

	return (0);
}
