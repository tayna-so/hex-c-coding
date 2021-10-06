/** File: 3-strcmp.c  Author: Tayna Sousa **/

#include "holberton.h"

/**
 *  _strcmp - it compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: + if >, - if < and 0 if =
**/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (0);
}
