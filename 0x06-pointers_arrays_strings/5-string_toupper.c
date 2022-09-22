#include "main.h"

/**
 * string_toupper - a function that changes all lower case letter to upper case
 * @str: the string to be changed
 *
 * return: the string with upper case
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
