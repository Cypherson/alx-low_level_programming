#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints out single digits of base 10
 *
 * Return: always 0 if successful
 */

int main(void)
{
	int s_digit = 0;

	while (s_digit <= 9)
	{
		/*change s_digit to ASCII code*/
		putchar(s_digit + '0');
		++s_digit;
	}

	putchar('\n');

	return (0);
}
