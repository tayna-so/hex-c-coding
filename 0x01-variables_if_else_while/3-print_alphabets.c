/* File: 3-print_alphabets.c  Author: Tayna Sousa */
#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */

int main(void)
{

	char min = 'a';
	char mai = 'A';

	for (min = 'a'; min <= 'z'; min++)
		putchar(min);

	for (mai = 'A'; mai <= 'Z'; mai++)
		putchar(mai);

	putchar('\n');

	return (0);
}
