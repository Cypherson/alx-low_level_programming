#include <stdio.h>

/**
* description: main prints the string in the function
*return: 0 if success
*/
int main(void)
{
char c;
int i;
long li;
float f;

printf("Size of char: %ld byte(s)\n", sizeof(c));
printf("Size of int: %ld byte(s)\n", sizeof(i));
printf("Size of long: %ld byte(s)\n", sizeof(li));
printf("Size of float: %ld byte(s)\n", sizeof(f));
return (0);
}
