#include "main.h"
/**
 * Description: print_sign - is a function that prints the sign of a number
 *
 * Return: always success
 */
int print_sign(int n){
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{	
		_putchar('-');
	return (-1);
}
}
