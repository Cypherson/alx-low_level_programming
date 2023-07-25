#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be printed
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void puts2(char *str)
{
	int lent = 0,  index = 0;

	while (str[index++])
	{
		lent++;
	}

	for (index = 0; index < lent; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
