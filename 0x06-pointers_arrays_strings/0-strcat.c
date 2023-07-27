#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination of concatination
 * @src: source of concatination
 *
 * Return: a pointer to dest
 *
 * (c) Cypherson
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}

