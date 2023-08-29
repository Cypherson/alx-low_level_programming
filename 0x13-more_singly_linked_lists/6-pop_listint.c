#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to head of list
 *
 * Return: the head node’s data (n).
 * >>	  or if the linked list is empty return 0
 *
 *
 * (c) Cypherson
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
