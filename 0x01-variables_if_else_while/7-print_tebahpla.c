#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * return - Always 0 (Success)
 */

int main(void)
{

	char num = 'a';

	for(num = 'z'; num >= 'a'; num--)
		putchar(num);

	putchar('\n');

	return (0);
}
