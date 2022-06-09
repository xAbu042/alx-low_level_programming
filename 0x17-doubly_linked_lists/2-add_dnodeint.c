#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @n: data to be add to the node
 * Return: address of the new element, NULL otherwise
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);

}
