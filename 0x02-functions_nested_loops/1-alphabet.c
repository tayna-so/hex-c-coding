/** File: 1-alphabet.c  Author: Tayna Sousa **/
#include "holberton.h"

/**
 * print alphabet in lowercase
 *
 **/
void print_alphabet(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}

