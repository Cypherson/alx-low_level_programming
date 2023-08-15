/**
 * _strcopy - a function that returns the length of a string
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 *
 * (c) Cypherson
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

