#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list to print
 *
 * Return: If str is NULL, print [0] (nil)
 * >>	   or the number of nodes
 *
 * (c) Cypherson
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
