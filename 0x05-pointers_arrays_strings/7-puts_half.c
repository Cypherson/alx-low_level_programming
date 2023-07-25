#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string to be printed
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void puts_half(char *str)
{
	int index = 0, lent = 0, n;

	while (str[index++])
	{
		lent++;
	}

	if ((lent % 2) == 0)
	{
		n = lent / 2;
	}
	else
	{
		n = (lent + 1) / 2;
	}
	for (index = n; index < lent; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
