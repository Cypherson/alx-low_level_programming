#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @ptr: pointer to char variable
 *
 * Return: ptr
 *
 * (c) Cypherson
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		i++;
	}
	return (ptr);
}
