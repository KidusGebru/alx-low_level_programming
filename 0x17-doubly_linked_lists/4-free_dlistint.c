#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer ot first node in a list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
