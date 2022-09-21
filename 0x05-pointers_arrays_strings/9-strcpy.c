#include "main.h"

/**
 * _strcpy - copies and paste string
 * @dest: destination to be copied to
 * @src: source to be copied from
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;
	
	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	
	
	return (dest);
}
