#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - this function prints a string is reverse
 * @s: is the input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
	putchar('\n');

}

