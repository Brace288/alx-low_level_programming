#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints lowercas alphabets in reverse'
 * Retun: Always 0
 **/

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);

	putchar('\n');

	return (0);
}
