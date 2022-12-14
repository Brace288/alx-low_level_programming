#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: the integer array input
 * @size: the size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element if cmp does not return 0,
 * -1 if size <= 0 and -1 if no element matches
 **/




int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
