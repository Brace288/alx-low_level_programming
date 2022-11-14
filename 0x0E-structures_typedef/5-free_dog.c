#include "dog.h"
#include <stdlib.h>


/*
 * free_dog - releases dogs
 *
 * @d: the structure to release
 *
 * Return: nothing
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
