#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head
 * @index: value to get or index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 *
 * (c) Cypherson
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int enumerate = 0;

	while (index > enumerate)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		++enumerate;
	}
	return (head);
}
