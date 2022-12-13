#include "main.h"
/**
 * Description: _isalpha - is a function that checks for alphabetic characters
 *
 * @c: input letter
 *
 * Return:Success
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
