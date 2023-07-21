#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 *
 * Return:void
 *
 */

void print_square(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');

			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
