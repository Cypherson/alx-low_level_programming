#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase to stdout
 *
 * Return: void;
 *
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
