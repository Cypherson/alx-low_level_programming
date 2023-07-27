#include "main.h"

/**
 * _strncat -  concatenates two strings,using at most n bytes from src
 * @dest: Destination of string
 * @src: source of string
 * @n: number of bytes to be used from src
 *
 * Return: a pointer to dest
 *
 * (c) Cypherson
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;

	while (dest[j])
		j++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
