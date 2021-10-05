/** File: 6-puts2.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * puts2 - it prints every other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
