#include "main.h"

/**
 * leet - the encoder
 * @str: string to be encoded
 * Return: value of n
 */

char *leet(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		(str[i]) = transform(str[i];
				i++;
	}
	return (str);

}

/**
 * transform - a function that maps a letter with leet code
 * @x: char to be encoded
 *
 *Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 0)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
