#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory area with
 * @n: number of bytes to be used
 * Return: pointer to the filled memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
