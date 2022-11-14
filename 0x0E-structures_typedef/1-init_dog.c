#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - initialize the variable type
 *
 * Return: strings and float
 *
 */


 void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
