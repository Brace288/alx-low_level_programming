#include "function_pointers.h"

/**
 * array_iterator - executes iteration of array elements
 * @array: input array
 * @size: size of the array
 * @action: the pointer of the function
 *
 * Return: nothing
 **/



void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
