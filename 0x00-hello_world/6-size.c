#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the description of the program'
 *
 * Return: Always 0
 **/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %zu byte(s)\n", sizeof(a));
	printf("size of an int: %zu byte(s)\n", sizeof(b));
	printf("size of a long int: %zu byte(s)\n", sizeof(c));
	printf("size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
