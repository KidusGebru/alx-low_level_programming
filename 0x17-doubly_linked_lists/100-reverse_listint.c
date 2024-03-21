#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to pointer of first node
 *
 * Return: Pointer to first node in reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *next;

	if (*head == NULL || head == NULL)
		return (NULL);

	start = *head;
	next = start->next;
	start->next = NULL;
	while (next != NULL)
	{
		start = next;
		next = next->next;
		start->next = *head;
		*head = start;
	}
	return (*head);
}
