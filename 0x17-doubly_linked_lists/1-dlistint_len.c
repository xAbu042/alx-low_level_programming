#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (!h)
		return (0);

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
