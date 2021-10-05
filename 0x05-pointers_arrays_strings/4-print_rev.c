/** File: 4-print_rev.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * 4-print_rev - it prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
