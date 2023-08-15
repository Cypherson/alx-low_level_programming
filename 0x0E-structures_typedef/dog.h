#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dat structure for dog
 *
 * @name: name of dog
 *
 * @age: age of the dog
 *
 * @owner: dog owner
 *
 *
 * (c) Cypherson
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
 *
 * (c) Cypherson
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif /*struct dog*/

