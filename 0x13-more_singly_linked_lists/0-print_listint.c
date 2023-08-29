#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to head
 *
 * Return: the number of tf elements in the list
 *
 * (c) Cypherson
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		++index;
		h = h->next;
	}

	return (index);
}
