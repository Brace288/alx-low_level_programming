#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++);
	
	c = tolower(c);

	putchar(c);
	putchar('\n');

	return (0);
}

