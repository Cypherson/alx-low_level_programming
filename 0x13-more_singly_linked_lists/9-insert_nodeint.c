#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to head of the list
 * @idx:  index of the list where the new node should be
 * >>	  added. Index starts at 0
 * @n: number of nodes to be added
 *
 *
 * Return: the address of the new node, or NULL if it failed
 *
 *
 * (c) Cypherson
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new;
	listint_t *hd;

	hd = *head;

	if (idx != 0)
	{
		for (index = 0; index < idx - 1 && hd != NULL; ++index)
			hd = hd->next;
	}

	if (hd == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = hd->next;
		hd->next = new;
	}

	return (new);
}
