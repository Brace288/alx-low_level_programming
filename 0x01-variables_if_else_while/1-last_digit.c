#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'printing srings and numbers'
 * Return: Always 0
 **/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m;

	m = n % 10;

	if (m > 5)
		printf("The last digit of %d is %d and is greater than 5 \n",
				n, m);

	return (0);
}
