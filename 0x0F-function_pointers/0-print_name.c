#include "function_pointers.h"



/*
 * print_name - prints the name
 * @name: name to be printed
 * @f: function
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
