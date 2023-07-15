#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabets in reverse
 *
 * Return: 0 if successful
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
