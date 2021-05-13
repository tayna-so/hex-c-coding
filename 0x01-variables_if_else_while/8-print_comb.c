#include <stdio.h>

/**
 * main - print all possible combinations of
 * single-digit numbers
 *
 * return - Always 0 (Success)
 */

int main(void)
{

	unsigned char num = '0';

	for(num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if(num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
} 
