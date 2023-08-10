#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 *
 * @b: variable who's size is to be allocated
 *
 * Return: a pointer to the allocated memory
 *
 *
 * (c) Cyphesron
 */

void *malloc_checked(unsigned int b)
{
	char *adr = malloc(b);

	if (adr == NULL)
		exit(98);
	return (adr);
}
