#include "main.h"

/**
 * _strchr - locates a character 'c' in  string.
 * @s: pointer used
 * @c: character to be located
 *
 * Return:  a pointer to the first occurrence of the
 * character c in the string s, or NULL
 * if the character is not found.
 *
 * (c) Cypherson
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
