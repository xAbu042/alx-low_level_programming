#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first node of list_t list
 */
void free_list(list_t *head)
{
	list_t *lst;

	while (head)
	{

		lst = head->next;
		free(head->str);
		free(head);
		head = lst;
	}
}
