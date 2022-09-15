#iclude "main.h"
/**
 * Description: print_alphabet_x10.c - ptinting 10 times the alphabets
 *
 * Return: Always success
 */
void print_alphabet_x10.c(void){
	int n, co;
	co = 0;
	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
