#include"main.h"

/*
 * _isalpha - Entry point
 * @c: letters to be checked
 * Description: checks for letters
 * return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
