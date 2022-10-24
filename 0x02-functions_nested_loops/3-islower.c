#include "main.h"
/**
 * _islower(int c) - Entry point
 * Description: checks for lowercase
 * return: 0 or 1
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
