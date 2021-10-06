/** File: 2-strncpy.c  Author: Tayna Sousa **/

#include "holberton.h"

/**
* _strncpy - it copies a string
* @dest: A pointer to the string
* @src: String to be copied
* @n: concatenates caracters
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (*(src + j) != '\0' && n > j)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (n > j)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
