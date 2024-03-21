#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to first node in the list
 * @idx: Position of new node in the list
 * @n: Value of node
 *
 * Return: Pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp;
	unsigned int i = 0;

	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	temp = *h;
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}

