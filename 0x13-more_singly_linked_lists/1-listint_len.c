#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked listint_t list
 * @h: First node of list
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + listint_len(h->next));
}
