/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to bit
 * @index: is the index, starting from 0 of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 *
 * (c) Cypherson
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index >= 64)
		return (-1);

	val = 1 << index;
	*n = (*n | val);

	return (1);
}

