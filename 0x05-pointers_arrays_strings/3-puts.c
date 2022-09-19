#include "main.h"

/**
 * _puts -  prints a string to stdout
 * @str: string to be printed to stdout
 * Return: no error if successful
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
