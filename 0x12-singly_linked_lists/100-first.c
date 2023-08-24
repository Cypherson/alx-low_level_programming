#include <stdio.h>

/**
 * print - prints a string before the main-function
 * >>	   is executed
 *
 * Return: void(Nothing)
 *
 *
 * (c) Cypherson
 */

void print(void) __attribute__ ((constructor));
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
