#include "main.h"
/**
 * _strncpy - copies a string including a terminating null bite
 * @dest: a buffer to store the copied string
 * @src: source string
 * @n: max number of bytes to be copied
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
