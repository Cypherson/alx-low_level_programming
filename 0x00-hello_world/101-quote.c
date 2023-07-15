#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'WRITEs' a string to stdout
 *
 * Return: 1 on success
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);

	return (1);
}
