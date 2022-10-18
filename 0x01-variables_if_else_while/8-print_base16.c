#include <stdio.h>

/**
 * main -Entry point
 * Description: 'print base 8'
 * Return: Always 0
 **/


int main(void)
{
	int n;
	char m;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
