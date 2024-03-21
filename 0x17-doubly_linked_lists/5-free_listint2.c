#include "lists.h"

/**
 * * _free_list - Frees a listint_t list
 * * @head: Pointer to start node
 * *
 * * Return: void
 */
void _free_list(listint_t *head)
{
	if (head->next)
		_free_list(head->next);
	free(head);
}

/**
 * * free_listint2 - Frees a listint_t list and sets head to NULL
 * * @head: Pointer to pointer of first node in the list
 * *
 * * Return: Void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head == NULL)
	{
		*head = NULL;
		return;
	}

	_free_list(*head);

	*head = NULL;
}
