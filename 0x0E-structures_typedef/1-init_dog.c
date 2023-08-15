#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: pointer to dog name
 * @age: the age of the dog
 * @owner: pointer to dog owner
 *
 * Return: void
 *
 *
 * (c) Cypherson
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
