#include "main.h"
/**
 * Description: _islower - a function that checks for lowercase character
 *
 * @c: is a single letter input
 *
 *Return: success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
