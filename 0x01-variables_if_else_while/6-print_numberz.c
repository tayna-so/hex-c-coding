#include <stdio.h>

/**
 * main - print all numbers of base 10
 * without variable of type char
 *
 * return - Always 0 (Success)
 *
 */

int main(void)
{

	unsigned char num;

	for(num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);

}
