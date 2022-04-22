#include "lists.h"

/**
 * list_len - calculates no. of elements in a linked list
 * @h: pointer to the linked list
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
