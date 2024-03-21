#include "lists.h"

/**
 * sum_dlistint - Sums all the data in a dlistint_t linked list
 * @head: Pointer to the first node
 *
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next)
			return (head->n + sum_dlistint(head->next));
		return (head->n);
	}
	return (0);
}
