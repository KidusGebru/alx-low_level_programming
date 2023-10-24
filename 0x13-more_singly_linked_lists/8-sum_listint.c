#include "lists.h"

/**
 * sum_listint - Sums all the data in a listint_t linked list
 * @head: Pointer to the first node
 *
 * Return: Sum of all the data
 */
int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next)
			return (head->n + sum_listint(head->next));
		return (head->n);
	}
	return (0);
}
