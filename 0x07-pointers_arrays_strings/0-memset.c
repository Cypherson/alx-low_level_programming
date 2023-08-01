#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes of memory area to be filled
 * @s: pointer used
 * @b: bytes used
 *
 * Return: pointer to the memory area s
 *
 * (c) Cypherson
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
