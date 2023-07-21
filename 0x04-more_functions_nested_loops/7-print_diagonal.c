#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 *
 * Return: always  void
 *
 */

void print_diagonal(int n)
{
	int l, sp;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (sp = 0; sp < l; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (l == n - 1)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
