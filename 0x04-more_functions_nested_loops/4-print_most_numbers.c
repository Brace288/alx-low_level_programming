#include "main.h"

/*
 * print_most_numbers - print numbers with exceptions
 * @c: char to check
 * return: void
 */

void print_most_numbers(void)
{
	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);

	_putchar('\n');
}
