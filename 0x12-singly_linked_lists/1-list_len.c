#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: is pointer to list
 *
 * Return: number of nodes in h
 *
 * (c) Cypherson
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
