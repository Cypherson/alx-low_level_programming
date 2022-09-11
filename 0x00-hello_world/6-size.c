#include <stdio.h>

/**
 * Description: main prints out string to stdout
 * Return: 0 if success
 * main - Entry point
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of char: %d byte(s)\n", sizeof(a));
printf("Size of int: %d byte(s)\n", sizeof(b));
printf("Size of long int: %d byte(s)\n", sizeof(c));
printf("Size of long long int: %d bytes(s)\n" sizeof(d));
printf("Size of float: %d byte(s)\n", sizeof(e))
return (0);
}
