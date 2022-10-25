#include "main.h"
/*
 * more_numbers - print numbers 0-14 10 times
 * @n: number of iteration
 * @m: numbers to be printed
 * return: numbers 0-14 x10
 */

void more_numbers(void)
{
	int n;

	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
