#include <unistd.h>

/**
 * _putchar - writes a char c to stdout
 * @c: character to be written to stdout
 *
 * Return: 1 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
