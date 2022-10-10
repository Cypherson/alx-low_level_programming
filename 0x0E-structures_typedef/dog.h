#ifndef DOG
#define DOG
/**
 * struct dog - contains the structure of a dog
 * @name: is the name of dog
 * @age: is the age of the dog
 * @owner: is the name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
