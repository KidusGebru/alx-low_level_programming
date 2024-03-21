#include "lists.h"

/**
 * find_listint_loop - Finds the loops in a linked list
 * @head: Pointer to first node in the loop
 *
 * Return: Address of looping node or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (head > temp)
			return (head);
	}
	return (NULL);
}
