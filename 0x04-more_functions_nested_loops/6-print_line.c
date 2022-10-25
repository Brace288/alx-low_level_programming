#include "main.h"
/*
 * print_line - entry point
 * Description: prints '_' for the number n
 * @n: input number
 * @m: number of iteration
 * Return: void
 */


void print_line(int n)
{

	int m;

	m = 0;

	if (n > 0)

		for (m = 0; m <= n; m++)
			_putchar('-');
}
