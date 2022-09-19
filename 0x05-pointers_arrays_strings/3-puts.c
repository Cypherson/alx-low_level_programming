#include <stdio.h>
#include "main.h"

/**
 * _puts -  prints a string to stdout
 * @str: string to be printed to stdout
 *
 * Description: prints a str
 * Return: no error if successful
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
