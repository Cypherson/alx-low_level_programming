#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory to be allocated
 *
 * Retuen: pointer to b
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
