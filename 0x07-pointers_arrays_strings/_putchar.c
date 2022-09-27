#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to standard out
 * @c: is the character to be wriiten to stdout
 * Return: 1 on success or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
