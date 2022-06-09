#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the list
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
