#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @src: memory area bytes are to be copied from
 * @dest: memory area bytes are to be copied to
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
