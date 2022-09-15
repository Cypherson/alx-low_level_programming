#include "main.h"
/**
 * Description: times_table - is a function that prints the 9 times table, starting with 0.
 * rw = row, col = column, d = digits 
 * Return: Success
 */
void times_table(void){
	int rw, col, d;
	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			d = (rw * col);
			if ((d / 10) > 0);
		}
		else
			_putchar(' ');
	}
