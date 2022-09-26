#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: string to check
 * @c: character to check for
 * Return: a pointer to the first occurrence of the character c in the string.
 *
 */

char *_strchr(char *s, char c)
{
	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
