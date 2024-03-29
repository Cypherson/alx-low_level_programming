#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
        listp_t *temp;
        listp_t *curr;

        if (head != NULL)
        {
                curr = *head;
                while ((temp = curr) != NULL)
                {
                        curr = curr->next;
                        free(temp);
                }
                *head = NULL;
        }
}


/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to head of a list.
 *
 * Return: number of nodes in the list.
 *
 * (c) Cypherson
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *ptr, *new, *plus;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		plus = ptr;

		while (plus->next != NULL)
		{
			plus = plus->next;
			if (head == plus->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&ptr);
	return (nnodes);
}
