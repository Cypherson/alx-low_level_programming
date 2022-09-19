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
	int i = 0;
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
