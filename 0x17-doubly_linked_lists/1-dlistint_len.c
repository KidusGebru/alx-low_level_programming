#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked dlistint_t list
 * @h: First node of list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + dlistint_len(h->next));
}
