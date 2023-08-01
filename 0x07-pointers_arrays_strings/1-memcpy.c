#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: number of bytes from memory area to be copied
 * @src: source
 * @dest: destination
 *
 * Return: a pointer to dest
 *
 * (c) Cypherson
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
