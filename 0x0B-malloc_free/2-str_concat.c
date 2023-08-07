#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: a pointer to s1 and NULL on failure
 *
 *(c) Cypherson
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int i, j, k, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	st = malloc(sizeof(char) * (i + j + 1));

	if (st == NULL)
	{
		free(st);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		st[k] = s1[k];

	lim = j;
	for (j = 0; j <= lim; k++, j++)
		st[k] = s2[j];

	return (st);
}
