#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to search
 * @needle: the string to search fro
 *
 * Return: pointer to the beginning of the needle
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
