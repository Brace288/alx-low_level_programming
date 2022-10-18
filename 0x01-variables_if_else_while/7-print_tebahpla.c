#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabets in reverse
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
