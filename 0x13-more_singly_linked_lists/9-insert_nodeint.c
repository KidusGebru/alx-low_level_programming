#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to first node in the list
 * @idx: Position of new node in the list
 * @n: Value of node
 *
 * Return: Pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temp;
	unsigned int i = 0;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		i++;
		temp = temp->next;

		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}

