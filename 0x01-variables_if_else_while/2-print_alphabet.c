#include <stdio.h>

/**
 * main: Entry point
 *
 * Return: Always 0
 */

/** prints alphabet in lowercase **/

int main(void)
{
	char ch = 'a';
		
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
		putchar ('\n');

	return (0);
}
