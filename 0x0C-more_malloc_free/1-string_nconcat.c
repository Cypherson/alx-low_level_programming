#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: poniter to the first string
 * @s2: pointer to the second string
 * @n: number of byte to reserve on heap
 *
 * Return: a poniter that  points to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated.
 *
 *
 * (c) Cypherson
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	concat = malloc(sizeof(char) * (i + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
}
