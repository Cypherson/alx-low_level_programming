#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to head
 * @str: pointer to string
 *
 * Return: address of the new element, or NULL if it failed
 *
 * (c) Cypherson
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;
	return (*head);
}
