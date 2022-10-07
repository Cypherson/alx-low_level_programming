#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i, j, num, len;
	char ptr;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (null);

	for (i = 0; i s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}

