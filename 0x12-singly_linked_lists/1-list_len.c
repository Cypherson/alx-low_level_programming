#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: is a pointer to the head of the linked list
 * Return: the number of elements in the string
 *
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
