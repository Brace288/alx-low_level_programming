#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print both upper and lower cases'
 * Return: Always 0
 **/


int main(void)
{
	char n;
	char m;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
