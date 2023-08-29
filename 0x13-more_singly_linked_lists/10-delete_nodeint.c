#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index'
 * >>			    of a listint_t linked list.
 *
 * @head: double pointer to head
 * @index:  index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 * (c) Cypherson
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int value;
	listint_t *before;
	listint_t *next;

	before = *head;

	if (index != 0)
	{
		for (value = 0; value < index - 1 && before != NULL; ++value)
			before = before->next;
	}

	if (before == NULL || (before->next == NULL && index != 0))
	{
		return (-1);
	}

	next = before->next;

	if (index != 0)
	{
		before->next = next->next;
		free(next);
	}
	else
	{
		free(before);
		*head = next;
	}

	return (1);
}
