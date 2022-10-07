#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - a function that concatenates two strings
 *@s1: string 1 the string to be concat upon
 *@s2: string 2 the string to be concat. from
 *@n: number of bytes to be concatinated
 *
 * Return: pointer to s1 followed by n bytes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = maloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0, s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
