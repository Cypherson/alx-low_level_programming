#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct memmory allocated
 *
 * @d: pointer to free
 *
 * Return: nothing
 *
 * (c) Cypherson
 */

void free_dog(dog_t *d)
{
	{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	return void;
}
