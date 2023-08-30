#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to head
 *
 * Return: The address of the node where the loop starts,
 * >>		or NULL if there is no loop
 *
 *
 * (c) Cypherson
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_2;
	listint_t *before;

	ptr_2 = head;
	before = head;
	while (head && ptr_2 && ptr_2->next)
	{
		head = head->next;
		ptr_2 = ptr_2->next->next;

		if (head == ptr_2)
		{
			head = before;
			before =  ptr_2;
			while (1)
			{
				ptr_2 = before;
				while (ptr_2->next != head && ptr_2->next != before)
				{
					ptr_2 = ptr_2->next;
				}
				if (ptr_2->next == head)
					break;

				head = head->next;
			}
			return (ptr_2->next);
		}
	}

	return (NULL);
}
