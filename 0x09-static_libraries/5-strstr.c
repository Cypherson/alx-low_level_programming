#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to check
 * @needle: substring to use
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 *
 * (c) Cypherson
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
