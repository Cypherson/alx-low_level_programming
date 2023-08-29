#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * >>		of a listint_t linked list.
 * @head: pointer to head
 *
 * Return: if the list is empty, return 0
 *
 *
 * (c) Cypherson
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	int total = 0;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
