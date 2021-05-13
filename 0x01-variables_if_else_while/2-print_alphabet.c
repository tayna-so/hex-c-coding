/*
 File: 2-print.alphabet.c
 Author: Tayna Sousa
*/
#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

		putchar('\n');

	return (0);
}
