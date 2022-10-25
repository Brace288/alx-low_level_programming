#include "main.h"

/*
 * print_diagonal - Entry point
 * @c:number of iterations
 * return: diagonals and new line
 */

void print_diagonal(int n)
{
	int c;
	int d;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	_putchar('\n');
}

