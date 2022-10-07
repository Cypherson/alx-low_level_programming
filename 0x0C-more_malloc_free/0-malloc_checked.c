#include <stdlib.h>

/**
 * malloc_checked - this function that allocates memory using malloc.
 * @b: memory to be allocated
 *
 * Return: pointer to b
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
