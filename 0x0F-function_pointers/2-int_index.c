/**
 * int_index - function nthat searches for an int
 * @array: the array of integers
 * @size: is the size of the array
 * @cmp: pointer used to compare functions
 * Return: index of the firt element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
			return (res);

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i] > 0)
			{
				res = i;
				break;
			}
	if ((cmp(array[i]) == (-1)))
			return (res);
		}
	}
	return (res)
}
