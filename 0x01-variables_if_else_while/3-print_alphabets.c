#include <stdio.h>

int main(void)
{

	char min = 'a';
	char mai = 'A';

	for (min = 'a'; min <= 'z'; min++)
		putchar(min);

	for (mai = 'A'; mai <= 'Z'; mai++)
		putchar(mai);
	
	putchar('\n');

	return (0);
}
