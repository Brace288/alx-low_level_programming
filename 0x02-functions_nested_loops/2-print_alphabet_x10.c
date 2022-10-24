#include "main.h"


/**
 * main - Entry point
 * Description: prints lower case x10
 * Return: Always 0
 **/


void print_alphabet_x10(void);
{
	int c, num;


	num = 0;

	while (num <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		num++;
		_putchar('\n');
	}
}
