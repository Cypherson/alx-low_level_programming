#include <stdlib.h>
#include "main.h"

/**
 * argstostr -  concatenates all the arguments of my program.
 * @ac: count of arguments
 * @av: pointer to auguments
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 *
 *
 * (c) Cypherson
 *
 */


char *argstostr(int ac, char **av)
{
	char *strout;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	strout = malloc((c + 1) * sizeof(char));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			strout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			strout[ia] = av[i][j];
	}
	strout[ia] = '\0';

	return (strout);
}
