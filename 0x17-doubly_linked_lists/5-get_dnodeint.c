#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: pointer to the list
 * @index: index of the node starting from 0
 * Return: nth node of the list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
