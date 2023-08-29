#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list to be freed
 *
 * Return: void
 *
 *
 * (c) Cypherson
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
