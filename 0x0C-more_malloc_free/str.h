#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _length - checks the length of a string
 * @str: string to check
 * Return: length of string
 */

int _length(char *str)
{
	int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

