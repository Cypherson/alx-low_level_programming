#include "main.h"
/**
 * Description: print_last_digit - is a function that prints the last digit of a number.
 *
 * @n: is the input letter
 *
 * Return: success
 */
int print_last_digit(int n){
	int p;
	p = (% 10);

	if (p < 0)
	{
		p = (-1 * p);
	}
	_putchar(p + '0');
	return (p);
}
