#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n)
 * of a dlsitint_t linked list
 * Return: sum of all the data
 * 0 if list is empty
 **/
int sum_dlistint(dlistint_t *head)
{

int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);

}
