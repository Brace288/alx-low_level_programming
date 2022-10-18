#include <stdio.h>

/**
 *
 * main - Entry point
 * Description: 'prints lowercas alphabets in reverse'
 * Return: Always 0
 **/

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);

	putchar('\n');

	return (0);
}
