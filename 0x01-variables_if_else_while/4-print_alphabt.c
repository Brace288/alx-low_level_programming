#include <stdio.h>
/**
 * main - Entry point
 * Description: printing characters of alphabets with exceptions'
 * Return: always 0
 **/


int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		if (ch != 'q' && ch != 'e')
			putchar(ch);

	putchar('\n');

	return (0);
}

