#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: String that will be concatinated upon
 * @src: source string to be concatinated on dest
 * Return:a pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] + src[index];

	return (dest);
}
