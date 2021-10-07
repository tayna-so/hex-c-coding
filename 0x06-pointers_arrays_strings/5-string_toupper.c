/** File 5-string_toupper.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * string_toupper - it changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: a pointer to the string
 **/

char *string_toupper(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 'a' && str[i] < 'z')
str[i] -= 32;
i++;
}
return (str);
}
