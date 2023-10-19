#include "lists.h"

/**
 * list_len - Returns the number of elements in a list
 * @h: Pointe to a node in the list
 *
 * Return: Number of nodes/elements
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next != NULL)
		return (1 + list_len(h->next));
	return (1);
}

