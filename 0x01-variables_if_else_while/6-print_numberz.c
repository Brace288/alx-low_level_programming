#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints integers in base 10'
 * Return: Always 0
 *
 **/

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');
	putchar('\n');

	return (0);
}
