#include "main.h"

/**
 * reverse_array - is a fucntion that reverses the contents of an array
 * @a: the array
 * @n: is the number of elements
 */

void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
