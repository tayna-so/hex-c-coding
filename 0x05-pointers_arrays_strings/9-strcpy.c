/** File: 9-strcpy.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * strcpy - it copies the string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 * Return: The value of pointer to temp
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
