/** File: 4-isalpha.c  Author: Tayna Sousa **/
#include "holberton.h"

/**
 * main - checks the alphabet character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	if(c > 'a' && c < 'z')
	{
		return (1);
	}
	else if(c > 'A' && c <'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
