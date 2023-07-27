#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 *
 * (c) Cypherson
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
