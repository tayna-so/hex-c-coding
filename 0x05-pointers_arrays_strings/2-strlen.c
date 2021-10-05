/** File: 2-strlen.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * 2-strlen - it returns the length of a string
 * @s: the variable to be evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
} 
