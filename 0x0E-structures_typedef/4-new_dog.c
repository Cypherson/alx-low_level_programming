#include "dog.h"
#include "stringcopy.h"
#include "stringlength.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -  creates a new dog.
 * @name: pointer to name of new dog
 * @age: age of new dog
 * @owner: pointer to ne owner
 *
 * Return: NULL if the function fails
 *
 * (c) Cypherson
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
}
