#include "main.h"

/**
 * print_alphabet_x10 - prints 10xalphabet in lowercase
 *
 * Return: (0) on success
 *
 */

void print_alphabet_x10(void)
{
	int mul;
	int alph;

	for (mul = 0; mul <= 9; mul++)
	{
		for (alph = 97; alph < 123; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}
