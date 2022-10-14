#include <stdlib.h>
#include <time.h>
/**
 * main
 * Decription: 'assigning positifve and negative values'
 * Return: Always 0 (success)
 **/
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);

}
