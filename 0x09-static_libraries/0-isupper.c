#include "main.h"

/**
 * Description: _isupper checks if a character is uppercase or not
 * @c: is the character to be tested for upper case
 * Return: Always 1 if it contains
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
