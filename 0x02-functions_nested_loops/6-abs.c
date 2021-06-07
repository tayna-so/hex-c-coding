/** File: 6-abs.c  Author: Tayna Sousa **/
#include "holberton.h"

/**
 * main - prints the absolute value of an integer
 *
 * Return: Always 0
 */
int _abs(int n)
{
	int a;

	if(n < 0)
	{
		a = n * -1;

		return (a);
	}
	else
	{
		return (n);
	}
}
