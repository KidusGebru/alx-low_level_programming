#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer ot first node in a list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
