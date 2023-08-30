#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to head
 *
 *
 * Return:  a pointer to the first node of the reversed list
 *
 *
 * (c) Cypherson
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *val;

	ptr = NULL;
	val = NULL;

	while (*head != NULL)
	{
		val = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = val;
	}
	*head = ptr;
	return (*head);
}
