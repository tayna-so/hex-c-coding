/** File: 1-strncat.c  Author: Tayna Sousa **/

#include "holberton.h"

/**
 * _strncat - it concatenates two strings
 * @dest: a pointer to the string
 * @src: string to be appended
 * @n concatenates characters
 * Return: dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && n > j)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}