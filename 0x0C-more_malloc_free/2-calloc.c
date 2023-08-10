#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size of bytes
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 *
 * (c) Cypherson
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < nmemb * size; index++)
		*(ptr + index) = 0;
	return ((void *)ptr);
}
