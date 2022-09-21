#include "main.h"

/**
 * _strncat - concatinates two strings but adds an inputed number of bytes
 * @dest: destination to be concatinated upon
 * @src: string to be appended to dest
 * @n: number of bytes from src to be appended to dest
 * Returns: a pointer to the resulting string of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
