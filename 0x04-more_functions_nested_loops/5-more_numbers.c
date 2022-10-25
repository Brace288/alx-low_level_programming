#include "main.h"


void more_numbers(void)
{
	int n;

	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
			_putchar(m + '0');
	}
	_putchar('\n');
}
