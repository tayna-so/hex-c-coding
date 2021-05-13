#include <stdio.h>

/**
 * main - print all possible combinations of
 * single-digit numbers
 *
 * return - Always 0 (Success)
 */

int main(void)
{

	int num = 0;

	for(num = 0; num <= 9; num++)
	{
		putchar((num % 10) + 0);
		if(num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
} 