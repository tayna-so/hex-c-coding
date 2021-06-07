/** File: 3-islower.c  Author: Tayna Sousa **/
#include "holberton.h"

/**
 * main - checks for lowercase character
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if(c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
