#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all numbers of base 16 in lowercase
 *
 * Return: zero if successful
 */

int main(void)
{
	int s_digit;

	for (s_digit = 48; s_digit < 58; s_digit++)
	{
		putchar(s_digit);
	}
	for (s_digit = 97; s_digit < 103; s_digit++)
	{
		putchar(s_digit);
	}
	putchar('\n');

	return (0);
}
