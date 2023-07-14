#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 if Success
 */

int main(void)
{
	int s_digit = 0;

	while (s_digit <= 9)
	{
		printf("%d", s_digit);
		s_digit++;
	}
	printf("\n");

return (0);
}
