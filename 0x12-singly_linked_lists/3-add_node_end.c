#include "lists.h"

/**
 * add_node_end - add a node to the end of a list
 * @head: double pointer to list_t list
 * @str: string to add to list
 * Return: address of the new element, NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
