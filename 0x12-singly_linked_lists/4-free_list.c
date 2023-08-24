#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head of node
 *
 * Return: void
 *
 * (c) Cypherson
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
