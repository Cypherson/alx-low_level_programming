#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: CASE 1 If new_size > old_size, the “added” memory
 * should not be initialized
 * CASE 2 If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * CASE 3 If new_size is equal to zero, and ptr is not NULL, then
 * the call is equivalent to free(ptr). Return NULL
 *
 * (c) Cypherson
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
