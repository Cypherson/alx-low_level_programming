#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * >>		  and sets the head to NULL
 *
 * @head: double pointer to head
 *
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

		*head = NULL;
	}
}
