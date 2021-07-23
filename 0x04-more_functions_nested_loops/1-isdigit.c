/*
 * File: 1-isdigit.c
 * Auth: Tayna Sousa
 */
#include "holberton.h"

/*
 * 1-isdigit.c: checks for a digit (0 through 9)
 * @c: the character to be checked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
