#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @ld: number's last digit to be printed
 *
 * Return: last digit
 *
 */

int print_last_digit(int ld)
{
	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
