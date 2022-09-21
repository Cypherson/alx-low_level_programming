#include "main.h"

/**
 * _strncat - a function that concatinates two strings
 * @dest: a buffer to be concatinated on
 * @src: a string to be appended to dest
 * @n: the maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
