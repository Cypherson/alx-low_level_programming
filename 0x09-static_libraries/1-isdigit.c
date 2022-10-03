#include "main.h"

/**
 * _isdigit - a function that checks for digits
 * @c: input
 * Return: 1 if there is a digit or 0 if otherwise
 *
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
