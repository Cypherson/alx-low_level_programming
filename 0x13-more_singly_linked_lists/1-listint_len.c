#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head
 *
 * Return: nunber of elements in a linked list
 *
 * (c) Cyphersson
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *temp;

	temp = h;

	while (temp != 0)
	{
		++count;
		temp = temp->next;
	}
	return (count);
}
