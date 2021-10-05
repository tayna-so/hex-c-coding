/** File: 3-puts.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * _puts - it prints a string to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
